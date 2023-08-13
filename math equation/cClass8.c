
// WAP to find area of circle.
#include<stdio.h>
main()
{
  int r;
  printf("Enter radius of circle : ");
  scanf("%d",&r);
  
  float area;
  float pi = 3.14;
  area = pi*r*r;
  
  printf("Area of circle is : %4.2f",area);   
}
