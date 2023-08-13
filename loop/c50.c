#include<stdio.h>
main()
{
	int a;
	printf("enter a number : ");
	scanf("%d",&a);
	
	int i;
	int c=0;
	
	for(i=2; i<a; i++)
	{
		if(a%i==0)
		{
				printf("this number is not prime ");
			c=1;
			break;
		}
	}
	
	if(c==0)
	{
		printf("this number is prime ");
	}
}
