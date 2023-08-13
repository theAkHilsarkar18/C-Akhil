
// WAP to find area of rectangle

#include<stdio.h>
main()
{
	int l,b,area;
	
	printf("Enter length of rectangle : ");
	scanf("%d",&l);
	printf("Enter width of rectangle : ");
	scanf("%d",&b);
	
	area = 2*l*b;
	
	printf("Area of rectangle is : %d",area);
}
