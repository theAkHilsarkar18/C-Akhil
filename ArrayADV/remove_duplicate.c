#include<stdio.h>
// 1. WAP to get the array and count & remove all duplicate values in the array.
int main()
{
    int a[5];
    int count = 0;

    for(int i=0; i<5; i++)
    {
        printf("enter the value of a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
    }
    printf("count of duplicate is %d\n\n",count);
    for(int i=0; i<5; i++)
    {
        printf("%d ",a[i]);
    }
}