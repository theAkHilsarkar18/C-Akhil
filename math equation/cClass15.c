
// 2.WAP to find a the answer given formula (x-y)2.

#include<stdio.h>
main()
{
	int x,y,ans;
	
	printf("Enter value of x : ");
	scanf("%d",&x);
	printf("Enter value of y : ");
	scanf("%d",&y);
	
	ans = (x-y)*(x-y);
	printf("(x-y)2 = %d",ans);
}
