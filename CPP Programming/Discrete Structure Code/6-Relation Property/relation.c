#include <stdio.h>
#include <stdlib.h>

int main()
{
	int reflexive = 0, irreflexive = 0, nonReflexive = 0, count = 0, verified = 0;
	int  symmetric = 0, asymmetric = 0, antiSymmetric = 0, transitive = 0, antiCount = 0;

	int i, j, k, l, setA[10], sizeA;
	int relation[100][2], relationSize, pair1[2], pair2[2], pair3[2];

	printf("How many elemnets do you want in set?\n");
    scanf("%d", &sizeA);
    printf("Enter %d elements in set: ", sizeA);
    for (i = 0; i < sizeA; i++)
    {
        scanf("%d", &setA[i]);
    }

    printf("How many pairs do you want in the relation?\n");
    scanf("%d", &relationSize);
    printf("Enter total %d elements in the relation:\n", relationSize * 2);
	for(i = 0; i < relationSize; i++)
	{
		printf("Enter two elements for pair %d: ", i + 1);
		for (j = 0; j < 2; j++)
		{
			scanf("%d", &relation[i][j]);
		}
	}
	// Relation elements check with respect to set
	for(i = 0; i < relationSize; i++)
	{
		for (j = 0; j < 2; j++)
		{
			for(k = 0; k < sizeA; k++)
			{
				if(setA[k] == relation[i][j])
				{
					verified = 1;
				}
			}
			if(!verified)
			{
				printf("Elements on the relation doesn't belong to the set!\n");
				exit(0);
			}
			else
			{verified = 0;}
		}
	}

	// Reflexivity test
	for (i = 0; i < sizeA; i++)
	{
		for(j = 0; j < relationSize; j++)
		{
			for (k = 0; k < 2; k++)
			{
				pair1[k] = relation[j][k];
			}	
			if(pair1[0] == setA[i])
			{
				if(pair1[0] == pair1[1])
				{
					count++;
					break;
				}
			}	
		}
	}
	if(count == sizeA)
	{
		reflexive = 1;
	}
	else if(count == 0)
	{
		irreflexive = 1;
	}
	else
	{
		nonReflexive =1;
	}
	count = 0;

	// Symmetry test
	for(i = 0; i < relationSize; i++)
	{
		for (j = 0; j < 2; j++)
		{
			pair1[j] = relation[i][j];
		}	
		for(j = 0; j < relationSize; j++)
		{
			for(k = 0; k < 2; k++)
			{
				pair2[k] = relation[j][k];
			}
			if((pair1[0] == pair2[1]) && (pair1[1] == pair2[0]))
			{
				count++;
				if(pair1[0] == pair1[1])
				{
					antiCount++;
				}
			}
		}
	}
	if(count == antiCount)
	{
		antiSymmetric = 1;
	}
	if(count == relationSize)
	{
		symmetric = 1;
	}
	else if(count == 0)
	{
		asymmetric = 1;
	}
	count = 0;

	// Transitive test
	for(i = 0; i < relationSize; i++)
	{
		for (j = 0; j < 2; j++)
		{			
			pair1[j] = relation[i][j];
		}	
		if(pair1[0] != pair1[1])
		{
			for(j = 0; j < relationSize; j++)
			{
				for(k = 0; k < 2; k++)
				{
					pair2[k] = relation[j][k];
				}
				if(pair2[0] != pair2[1])
				{
					if((pair2[0] == pair1[1]) && (pair1[0] != pair2[1]))
					{
						for(k = 0; k < relationSize; k++)
						{
							for(l = 0; l < 2; l++)
							{
								pair3[l] = relation[k][l];
							}
							if(pair3[0] != pair3[1])
							{
								if((pair3[0] == pair1[0]) && (pair3[1] == pair2[1]))
								{
									transitive = 1;
								}
							}
						}
						if(!transitive)
						{
							goto exit;
						}
					}
				}
			}
		}
	}
	exit:
	// Final Description
	printf("Relation is %s", (nonReflexive ? "Non-Reflexive.\n" : "Reflexive or Irreflexive.\n"));
	printf("Relation is %s", (reflexive ? "Reflexive.\n" : "not Reflexive.\n"));
	printf("Relation is %s", (irreflexive ? "Irreflexive.\n" : "not Irreflexive.\n"));
	printf("Relation is %s", (symmetric ? "Symmetric.\n" : "not Symmetric.\n"));
	printf("Relation is %s", (asymmetric ? "Asymmetric.\n" : "not Asymmetric.\n"));
	printf("Relation is %s", (antiSymmetric ? "Anti Symmetric.\n" : "not Anti Symmetric.\n"));
	printf("Relation is %s", (transitive ? "Transitive.\n" : "not Transitive.\n"));
}