// wap to find number is even or odd using return with parameter function.

#include<stdio.h>

//udf

	int eno(int a)
	{
		if(a%2==0)
		{
			printf("number is even");
		}
		else
		{
			printf("number is odd");
		}
		
		return a;
	}

void main()
{
	eno(11);
}
