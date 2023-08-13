
// WAP to swap two variable.

#include<stdio.h>
main()
{
	int a=10, b=20 ,c;
	
	c=a+b;
	a=c-a;
	b=c-b;
	
	printf("now a = %d\n",a);
	printf("now b = %d",b);
}
