

#include<stdio.h>
main()
{

    // 1.WAP to get & print 1D array of N elements.

    int n;
    printf("enter length og array : ");
    scanf("%d",&n);

    int a[100];
    int i;

    printf("enter value of array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        printf("array a[%d] = %d\n",i,a[i]);
    }

   
}
