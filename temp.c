#include<stdio.h>
void main(){
	
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 500;
	step = 20;

	fahr = lower;
	
	printf("Fahrenheit\tcelsius \n");
	printf("\n");
	while (fahr<=upper){
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%6.1f\t%6.2f\n", fahr, celsius);
		fahr = fahr + step;
	}

}
