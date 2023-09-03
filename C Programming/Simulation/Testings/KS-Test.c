#include <stdio.h>

struct KS {
    float numbers[20];
    float D, tabulatedD;
    float Dplusmax, Dminusmax;
    float Dplus[20], Dminus[20];
    float ratio[20], ratiominus[20];
    int i, j, n;
};

void getdata(struct KS *ks) {
    printf("How many numbers?:\n");
    scanf("%d", &ks->n);
    printf("Enter %d numbers:\n", ks->n);
    for (ks->i = 0; ks->i < ks->n; ks->i++) {
        printf("Enter %d number:\n", ks->i + 1);
        scanf("%f", &ks->numbers[ks->i]);
    }
}

void BubbleSort(struct KS *ks) {
    int i, j;
    float temp;
    for (i = 0; i < ks->n - 1; i++) {
        for (j = 0; j < ks->n - i - 1; j++) {
            if (ks->numbers[j] > ks->numbers[j + 1]) {
                temp = ks->numbers[j];
                ks->numbers[j] = ks->numbers[j + 1];
                ks->numbers[j + 1] = temp;
            }
        }
    }
    printf("The numbers in ascending order is:\n");
    for (i = 0; i < ks->n; i++) {
        printf("%.2f ", ks->numbers[i]);
    }
    printf("\n");
}

void calculate(struct KS *ks) {
    for (ks->i = 0; ks->i < ks->n; ks->i++) {
        int j;
        j = ks->i + 1;
        ks->ratio[ks->i] = (float)j / ks->n;
        ks->ratiominus[ks->i] = (float)ks->i / ks->n;
        ks->Dplus[ks->i] = ks->ratio[ks->i] - ks->numbers[ks->i];
        ks->Dminus[ks->i] = ks->numbers[ks->i] - ks->ratiominus[ks->i];
    }
}

void display(struct KS *ks) {
    printf("\n\n");
    printf("%10s", "i");
    for (ks->i = 1; ks->i <= ks->n; ks->i++) {
        printf("%10d", ks->i);
    }
    printf("\n");
    printf("%10s", "R(i)");
    for (ks->i = 0; ks->i < ks->n; ks->i++) {
        printf("%10.2f", ks->numbers[ks->i]);
    }
    printf("\n");
    printf("%10s", "i/n");
    for (ks->i = 0; ks->i < ks->n; ks->i++) {
        printf("%10.2f", ks->ratio[ks->i]);
    }
    printf("\n");
    printf("%10s", "D+");
    for (ks->i = 0; ks->i < ks->n; ks->i++) {
        printf("%10.2f", ks->Dplus[ks->i]);
    }
    printf("\n");
    printf("%10s", "D-");
    for (ks->i = 0; ks->i < ks->n; ks->i++) {
        printf("%10.2f", ks->Dminus[ks->i]);
    }
    printf("\n");
    ks->Dplusmax = ks->Dplus[0];
    ks->Dminusmax = ks->Dminus[0];
    for (ks->i = 1; ks->i < ks->n; ks->i++) {
        if (ks->Dplus[ks->i] > ks->Dplusmax) {
            ks->Dplusmax = ks->Dplus[ks->i];
        }
        if (ks->Dminus[ks->i] > ks->Dminusmax) {
            ks->Dminusmax = ks->Dminus[ks->i];
        }
    }
    printf("D+ max: %.2f\n", ks->Dplusmax);
    printf("D- max: %.2f\n", ks->Dminusmax);
    printf("D = max(%.2f, %.2f) =", ks->Dplusmax, ks->Dminusmax);
    if (ks->Dplusmax > ks->Dminusmax) {
        ks->D = ks->Dplusmax;
    } else {
        ks->D = ks->Dminusmax;
    }
    printf(" %.2f\n", ks->D);
}

void conclusion(struct KS *ks) {
    printf("Enter the tabulated value:\n");
    scanf("%f", &ks->tabulatedD);

    if (ks->D < ks->tabulatedD) {
        printf("The test is accepted.\n");
    } else {
        printf("The test is rejected.\n");
    }
}

int main() {
    struct KS ks1;
    getdata(&ks1);
    BubbleSort(&ks1);
    calculate(&ks1);
    display(&ks1);
    conclusion(&ks1);
    return 0;
}
