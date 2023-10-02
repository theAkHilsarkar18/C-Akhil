

#include<stdio.h>
#include<stdlib.h>

void array(int a[],int length)
{
	int max = 0;
	for(int i=0; i<length; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
	}
	printf("maximum element is %d",max);
}


int main()
{
	int arr[] = {11,2,3,4,-5,7,8,4,5,90};
	array(arr,sizeof(arr)/sizeof(arr[0]));
	return 0;
}






// WAP to find factorial of a number using recursion

// int factorial(int n)
// {
// 	if(n==1)
// 	{
// 		return 1;
// 	}
// 	return n * factorial(n-1);
// }

// #include<stdio.h>
// int main()
// {
// 	int ans = factorial(5);
// 	printf("ans is %d",ans);
// }
