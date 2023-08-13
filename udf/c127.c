// wap to find cube of give number using.

#include<stdio.h>
/////////////////////// USER DEFINE FUNCTION ///////////////////////////////////////

	void cube()
	{
		int a;
		printf("\nener a number : ");
		scanf("%d",&a);
		printf("cube of %d is : %d\n",a,a*a*a);
		cube();
	}
	
/////////////////////// MAIN FUNCTION ////////////////////////////////////////////

	void main()
	{
		cube();
	}
