
// WAP to find area of triangle

#include<stdio.h>
main()
{
	int area,l1,l2,l3;
	
	printf("Enter three sided length of triangle sequencly : ");
	scanf("%d %d %d",&l1,&l2,&l3);
	
	area=3*l1*l2*l3;
	
	printf("Area of triangle is : %d",area);
	
}
