
// WAP to find area of rectangle

int factorial(int n)
{
	if(n==1)
	{
		return 1;
	}
	return n * factorial(n-1);
}

#include<stdio.h>
int main()
{
	int ans = factorial(5);
	printf("ans is %d",ans);
}
