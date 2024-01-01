#include<stdio.h>

void sum(int a[],int n)
{
    int sum = 0;
    for(int i=0; i<x; i++)
    {
        sum = sum + a[i];
    }
    printf("sum is %d",sum);
}

int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    sum(a,10);
    return 0;
}