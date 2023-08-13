// wap to create calc using nested function;

#include<stdio.h>
// udf
// calc usinf nested function


	void calc(int a,int b)
	{
		printf("sum of %d and %d is : %d",a,b,a+b);
		sub(a,b);
		multi(a,b);
		div(a,b);
		mod(a,b);
		
	}
	
	void sub(int a,int b)
	{
		printf("\nsubstraction of %d and %d is : %d",a,b,a-b);
	}
	
	void multi(int a,int b)
	{
		printf("\nmultiplication of %d and %d is : %d",a,b,a*b);
	}
	
	void div(int a,int b)
	{
		printf("\ndivison of %d and %d is : %d",a,b,a/b);
	}
	
	void mod(int a,int b)
	{
		printf("\nreminder of %d and %d is : %d",a,b,a%b);
	}


// main function

		void main()
		{
			int a,b;
			
			printf("Enter The a :");
			scanf("%d",&a);
			printf("Enter The b :");
			scanf("%d",&b);
			calc(a,b);
			
		
		}


