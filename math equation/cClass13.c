
// WAP to find perameter of circle

#include<stdio.h>
main()
{
	int r;
	float pi=3.14;
	float p;
	
	printf("Enter radius of circle : ");
	scanf("%d",&r);
	
	p = 2*pi*r;
	
	printf("Peremeter of circle : %4.2f",p);
}
