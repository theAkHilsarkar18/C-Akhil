// wap to find if a given number is divisible by 3 and 5 both without udf.

#include<stdio.h>
main()
{
	int a;
	printf("enetr a number : ");
	scanf("%d",&a);
	
	if(a%3==0 && a%5==0)
	{
		printf("number is divisible by 3 and 5 both ");
	}
	else
	{
		printf("number is not divisible by 3 and 5 both ");
	}
	
}
