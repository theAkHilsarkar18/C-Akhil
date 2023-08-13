#include<stdio.h>

main()
{
	int a;
	printf("enter a number : ");
	scanf("%d",&a);
	
	int b = a;
	int c;
	
	while(a>0)
	{   
		c = a % 10;
		printf("%d",c);
		a = a/10;
	}
}
