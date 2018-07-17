#include <stdio.h>

int
main ()
{
	int c = 0, i = 0, j = 0, x =0;
	int ndigit[10] = {0};
	int nsmall[26] = {0};
	int ncapital[26] = {0};

	while ((c = getchar ()) != EOF) {
		if (c >= '0' && c <= '9')
			++ndigit[c-'0'];
		else if (c >= 'a' && c <= 'z')
			++nsmall[c - 'a'];
		else if (c >= 'A' && c <= 'Z')
			++ncapital[c - 'A'];
	}

	for (i = 0; i < 10; i++) {
			printf("%d\t",i);
		for (j = 0; j < ndigit[i]; j++)
			printf("*");
		printf("\n");
	}

	for (i = 0; i <= 26; i++) {
		putchar(97 + i);
		printf("\t");
                for (j = 0; j < nsmall[i]; j++)
                        printf("*");
                printf("\n");
        }

	for (i = 0; i < 26; i++) {
		putchar(65 + i);
		printf("\t");
		for (j =0; j < ncapital[i]; j++)	
			printf("*");
                printf("\n");
        }

	return 0;
}
