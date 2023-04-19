#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

int default_mode();
int custom_mode();
int play_exit();
int check_guess(int guess, int magical, int min, int max);

void main()
{
    char mode;
    printf("\n\t\tN U M B E R     G U E S S I N G     G A M E !!!\n");
    while(mode!='1' || mode!='2')
    {
        printf("\n\nChoose Your Mode:\t 1. Default Mode\t 2. Custom Mode: ");
        mode= getchar();
        switch(mode)
        {
            case '1':
                default_mode();
                break;
            case '2':
                custom_mode();
                break;
            default:
                printf("\nInvalid Choice!!!\t Please choose correctly.\n");
        }
    }
    getchar();
}
int default_mode()
{
    int magicnumber, guessnumber;
    srand(time(0));
    magicnumber= rand() %50;
    printf("\n\t\tAabraa Kaa Daabraa !!!\t Magical Number is Created!");

    check_guess(guessnumber, magicnumber, 0, 50);
}
int custom_mode()
{
    int magicnumber, guessnumber, maximum, minimum;
    printf("\n\nEnter the starting number: ");
    scanf("%d", &minimum);
    printf("Enter the ending of number: ");
    scanf("%d", &maximum);
    srand(time(0));
    magicnumber= (rand() %(maximum - minimum + 1)) + minimum;
    printf("\n\t\tAabraa Kaa Daabraa !!!\t Magical Number is Created!");

    check_guess(guessnumber, magicnumber, minimum, maximum);

}
int check_guess(int guess, int magical, int min, int max)
{
    while(guess != magical)
    {
        printf("\n\nEnter your guess between %d and %d: ", min, max);
        scanf("%d", &guess);
        if(magical- guess<= 5 && magical- guess> 0)
        {
            printf("Your Number is slightly smaller!\n\nPress 'y' to CONTINUE or 'x' to QUIT: ");
            play_exit();
        }
        else if(magical- guess>= -5 && magical- guess< 0)
        {
            printf("Your Number is slightly larger!\n\nPress 'y' to CONTINUE or 'x' to QUIT: ");
            play_exit();
        }
        else if(magical> guess)
        {
            printf("Your Number is too small!\n\nPress 'y' to CONTINUE or 'x' to QUIT: ");
            play_exit();
        }
        else if(magical< guess)
        {
            printf("Your Number is too large!\n\nPress 'y' to CONTINUE or 'x' to QUIT: ");
            play_exit();
        }
    }
    printf("\n\t\tCONGRATULATIONS! You got the Magical Number!!!");
}
int play_exit()
{
    char play;
    play= getchar();
    if(play=='x')
    {
        exit(0);
    }
}