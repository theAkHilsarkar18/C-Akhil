
//6.WAP to find a the answer given formula (x-y-z)3.

#include<stdio.h>
main()

{
	int x,y,z,ans;
	
	printf("Enter value of x : ");
	scanf("%d",&x);
	printf("Enter value of y : ");
	scanf("%d",&y);
	printf("Enter value of z : ");
	scanf("%d",&z);
	
	ans = (x-y-z)*(x-y-z)*(x-y-z);
	printf("(x-y-z)3 = %d",ans);
}
