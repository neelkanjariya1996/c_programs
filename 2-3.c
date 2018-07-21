#include <stdio.h>

#define LENGTH 10

/* 123AB 
 * 1 * 16^4 + 2 * 16^3 + 3 * 16^2 + 10 * 16^1 + 11 * 16^0
 */
int 
power (int x, int y)
{
	int p = 0;
	int i = 0;
	p = 1;
	for (i = 0; i < y ; i++)
		p = p * x;
	return p;
}

int 
htoi (int number [])
{
	int c = 0, i = 0, len1 = 0, len = 0, sum = 0, j = 0;

	while ((c = getchar()) != '\n') {
		len++;
		number[i] = c;
	}
	printf("Lenght = %d\n", len);
	len1 = len - 1;
	for (i = 0; i < len; i++) {
		sum = sum + (number[i] * power(16, len1));
		--len1;
	}

	return sum;			
}

int
main ()
{
	int s[LENGTH] = {0};
	int len = 0;
	int a = 0;

	a = htoi(s);
	printf("%d", a);
	return 0;	
}
