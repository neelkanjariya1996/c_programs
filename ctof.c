#include <stdio.h>

int
main ()
{
	int celsius = 0;
	float fahr = 0;

	printf("Celsius\tFahrenheit\n");
	for (celsius = 0; celsius <=300; celsius = celsius = celsius + 20)
	{
		fahr = ((9.0 * celsius)/5.0) + 32;
		printf("%d\t%6.1f\n", celsius, fahr);
	}
	return 0;
}
