#include <stdio.h>

int
main ()
{
	int fahr, celsius;
	printf("Enter temperature in degree fahrenhite : \n");
	scanf("%d\n", &fahr);
	celsius = 5 * (fahr - 32)/9;
	printf("The temperature in degree celsius is : %d\n", celsius);
	return 0;
}
