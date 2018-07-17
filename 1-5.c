#include <stdio.h>

int
main ()
{
	int fahr = 0;
	float celsius = 0;

	printf("Fahrenheit\tCelsius\n");
	for (fahr = 300; fahr >=0; fahr = fahr - 20) {
		celsius = (5.0/9.0) * (fahr - 32);
		printf("%d\t\t%6.2f\n", fahr, celsius);
	}
	return 0;
}
