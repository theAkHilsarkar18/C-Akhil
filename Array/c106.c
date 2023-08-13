
// 4.WAP to find peform addition of 1D array & store it into another.

#include<stdio.h>
main()
{
	int n;
	printf("enter legnth of array : \n");
	scanf("%d",&n);
	
	int a[100],b[100],c[100];
	
	printf("enter value of array A : ");
	int i;
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("enter value of array B : ");
	for(i=0; i<n; i++)
	{
		scanf("%d",&b[i]);
	}
	
	//sum
	for(i=0; i<n; i++)
	{
		c[i] = a[i] + b[i];
		printf("sum of array c[%d] = %d\n",i,c[i]);
	}
	
	
}
