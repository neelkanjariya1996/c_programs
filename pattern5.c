#include <stdio.h>

int 
main ()
{
	int i=0, j=0, k=0, a=0, l=0, m=0;

	for (i=0; i<=6; i++)
	{
		for (j=0; j<=6-i; j++)
			printf("*");
		for (k=0; k<=(2*i); k++)
			printf(" ");
		for (l=0; l<=6-i; l++)
			printf("*");
		printf("\n");
	}

	for (i=6; i>=0; i--)
        {
                for (j=0; j<=6-i; j++)
                        printf("*");
		for (k=0; k<=(2*i); k++)
			printf(" ");
		for (l=0; l<=6-i; l++)
			printf("*");
                printf("\n");
        }

}
