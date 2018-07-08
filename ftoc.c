#include <stdio.h>

int
main ()
{
	int fahr = 0;
        float  celsius = 0;

	printf("Enter temperature in degree fahrenhite : ");
	scanf("%d\n", &fahr);
	celsius = 5 * (fahr - 32)/9;
	printf("The temperature in degree celsius is : %f\n", celsius);
	return 0;
}
