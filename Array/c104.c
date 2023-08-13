
#include<stdio.h>
main()
{
	int n;
	printf("enter legnth of array : \n");
	scanf("%d",&n);
	
	int a[100];
	
	printf("enter value of array : ");
	int i;
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		printf("%d\n",a[i]);
	}
	
	printf("legnth of array is : %d",n);


	
	
	
}
