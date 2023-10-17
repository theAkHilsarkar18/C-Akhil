#include<stdio.h>

int meanOfArray(int a[],int length)
{
    if(length==0)
    {
        return a[0];
    }
    return a[length] + meanOfArray(a,length-1);
}

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int length = sizeof(a)/sizeof(a[0]);
    int mean = meanOfArray(a,length);
    printf("mean of array : %d",mean/5);
    return 0;
}