#include<stdio.h>
main()
{
	// Write C program to calculate factorial of a number.
	
	int a;
	printf("enter a number : ");
	scanf("%d",&a);
	
	double b = 1;
	int i;
	for(i=1; i<=a; i++)
	{
		b = b * i;
	}
	
	printf("factorial number is : %d",b);
}
