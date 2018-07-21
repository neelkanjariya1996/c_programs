#include <stdio.h>

#define BIT 8

long 
power(long x, long y)
{	
	int i = 0;
	long a = 0;
	a = 1;
	for (i = 0; i <= y; i++) {
		a = a * x;
	}

	return a;
}

int
main ()
{	
	long double a = 0, b = 0, c = 0, d = 0;
	long double a1 = 0, b1 = 0, c1 = 0, d1 = 0;

	a = sizeof (char);
	b = sizeof (short);
	c = sizeof (int);
	d = sizeof (long);
	
	printf("size of char is : %.0LF bytes\n", a);
	printf("size of short is : %.0LF bytes\n", b);
	printf("size of int is : %.0LF bytes\n", c);
	printf("size of long is : %.0LF bytes\n\n", d);

	/* range of unsigned Data Types */	
	a = (power(2,((a * BIT) - 1))) - 1;
	b = (power(2,((b * BIT) - 1))) - 1;
	c = (power(2,((c * BIT) - 1))) - 1;
	d = (power(2,((d * BIT) - 1))) - 1;

	printf("Range of unsigned char is 0 to %.0LF\n", a);
	printf("Range of unsigned short is 0 to %.0LF\n", b);
	printf("Range of unsigned integer is 0 to %.0LF\n", c);
	printf("Range of unsigned long is 0 to %.0LF\n", d);

	/* range of signed Data Types */
	 	
	a = (power(2,((a * BIT) - 1)));
	b = (power(2,((b * BIT) - 1)));
	c = (power(2,((c * BIT) - 1)));
	d = (power(2,((d * BIT) - 1)));
	
	a1 = (power(2,((a * BIT) - 1))) - 1;
	b1 = (power(2,((b * BIT) - 1))) - 1;
	c1 = (power(2,((c * BIT) - 1))) - 1;
	d1 = (power(2,((d * BIT) - 1))) - 1;

	printf("Range of signed char is %.0LF to %.0LF\n", a, a1);
	printf("Range of signed short is %.0LF to %.0LF\n", b, b1);
	printf("Range of signed integer is %.0LF to %.0LF\n", c, c1);
	printf("Range of signed long is %.0LF to %.0LF\n", d, d1);

	return 0;
}
