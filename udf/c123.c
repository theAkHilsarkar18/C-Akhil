// wap to find area of circle by using return with parameter function.

#include<stdio.h>

	int area(int r)
	{
		return 2*r*r;
	}

	void main()
	{
		int a = area(10);
		printf("area of circle is : %d",a);
	}
