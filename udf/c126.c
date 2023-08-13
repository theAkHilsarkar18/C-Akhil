// wap to create infinite calc using UDF, switch case and loop.

#include<stdio.h>

/////////////////////// USER DEFINE FUNCTION /////////////////////////////////////////////////////////////////////////////////////	
	
	void calc()
	{
		int a,b,n;
		printf("\n\nEnter value of a A and B : ");
		scanf("%d%d",&a,&b);
		printf("which operation want you perform : \n for sum = 1 \n for substraction = 2 \n for multiplication = 3");  
		printf("\n for division = 4 \n for reminder = 5 \n for exit = 0 \n");
		scanf("%d",&n);
		
		switch(n)
		{
			case 0 : 
			{
				printf("Calc off");
				break;
			}
			
			case 1 : 
			{
				printf("sum is : %d",a+b);
				calc();
				break;
			}
			
			case 2 : 
			{
				printf("substraction is : %d",a-b);
				calc();
				break;
			}
			
			case 3 : 
			{
				printf("multiplication is : %d",a*b);
				calc();
				break;
			}
			
			case 4 : 
			{
				printf("division is : %d",a/b);
				calc();
				break;
			}
			
			case 5 : 
			{
				printf("reminder is : %d",a%b);
				calc();
				break;
			}
		}
		
	}
	

	
///////////////////////  MAIN FUNCTION //////////////////////////////////////////////////////////////////////////////////////////

	void main()
	{
		calc();
	}
