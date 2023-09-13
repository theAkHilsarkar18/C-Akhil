// WAP to get the array and print in descending order.
#include<stdio.h>
int main()
{
    // arrange this array in decending : high to low
    int a[10] = {1,2,4,6,7,3,4,6,8,9};
    int temp = 0;

    for(int i=0; i<10; i++)
    {
        for(int j=i+1; j<10; j++)
        {
            if(a[i]<a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for(int i=0; i<10; i++)
    {
        printf("%d ",a[i]);
    }
}