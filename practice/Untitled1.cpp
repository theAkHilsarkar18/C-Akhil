

// Write a c program to sum of all array elements

#include<stdio.h>
main()
{
	int a[100],sum=0;
	int n;
	printf("enter length of array");
	scanf("%d",&n);
	
	// enter array
	
	int i;
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		sum = sum + a[i];
	}
	printf("sum of array : %d",sum);
	
}
