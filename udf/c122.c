
#include<stdio.h>
void interest(int a,int r);

void main()
{
	// write a c program to find rate of interest using simple function.
	
	interest(100,10);
	
}

// usd

void interest(int a,int r)
{
	r = a * r/100;
	printf("simple interest is %d",r);
}
