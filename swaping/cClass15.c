
// WAP to swap two variable without third var.

#include<stdio.h>
main()
{
	int a=10, b=20;
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	
	printf("now a = %d\n",a);
	printf("now b = %d",b);
}
