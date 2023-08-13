
// WAP to find simple interest

#include<stdio.h>
main()
{
	int value;
	printf("Enter value : ");
	scanf("%d",&value);
	
	// interest value is 8%
	
	int rate;
	rate = (value*8)/100;
	
	int total;
	total = value+rate;
	
	printf("Your interest rate is : %d\n",rate);
	printf("Your value + interest is : %d",total);
}
