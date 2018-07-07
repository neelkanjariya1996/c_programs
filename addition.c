#include<stdio.h>
void main (){
	int x,b,c;
	printf("Enter two numbers\n");
	
	printf("Enter 1st number :");
	scanf("%d", &x);
        
	printf("Enter 2nd number :");
        scanf("%d", &b);

	c = x + b;

	printf("The sum of two numbers is : %d\n", c);
	return;
}
