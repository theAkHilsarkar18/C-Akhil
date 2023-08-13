
// 3.WAP to find average of 1D array.

#include<stdio.h>
main()
{
	int n;
	printf("enter legnth of array : \n");
	scanf("%d",&n);
	
	int a[100] ,sum=0;
	
	printf("enter value of array : ");
	int i;
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		sum = sum + a[i];
	}
	
	int avg = sum/n;
	printf("average of array : %d",avg);
}
