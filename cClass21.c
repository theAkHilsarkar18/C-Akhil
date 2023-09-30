
// WAP to find area of rectangle

#include<stdio.h>
int main()
{
	int r;
	float a;
	const float pi = 3.14;
	
	printf("Enter the valeu of r : ");
	scanf("%d",&r);
	
	
	a = pi*r*r; // 3.14 * 2 *2 = 12.14
	
	printf("Area of circle is : %.2f",a);
	return 0;
}
