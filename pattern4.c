#include <stdio.h>

int 
main ()
{
	int i=0, j=0, k=0, l=0;

	/*upper loop*/
	for (i=0; i<5; i++)
	{
		for (j=0; j<=i; j++)
			printf("*");
		for (k=0; k<=8-(2*i); k++)
			printf(" ");
		for (l=0; l<=i; l++)
			printf("*");
		printf("\n");
	}

	/*lower loop*/
	for (i=0; i<5; i++)
	{
		for (j=0; j<=4-i; j++)
			printf("*");
		for (k=0; k<=(2*i); k++)
			printf(" ");
		for (l=0; l<=4-i; l++)
			printf("*");
		printf("\n");
	}
}
