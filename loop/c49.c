#include<stdio.h>
main()
{
	// Write C program print out Fibonacci series. (0,1,1,2,3,5,8…)
	
	int n; 
	printf("enter a number : ");
	scanf("%d",&n);
	
	int i,a=0,b=1,c;
	
	printf("0 , 1 , ");
	for(i=0; i<=n; i++)
	{
		c = a + b;
		printf("%d , ",c);
		a = b;
		b = c;
		
	}
}
