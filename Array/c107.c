
// 5.WAP to find peform merging of 1D array & store it into another.

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
	
	printf("=====================================================================\n");
	
	for(i=0; i<n; i++)
	{	
		c[i] = a[i];
		printf("%d\n",c[i]);
	}
	
	int x = 0;
	for(i=n; i<n+n; i++)
	{	
		c[i] = b[x];
		x = x+1;
		printf("%d\n",c[i]);
	}

	
}
