// Wap to find second largest number in array

#include<stdio.h>

int main()
{
    int a[] = {1,9,2,8,3,7,4,6,5,10};
    int max = 0;

    for(int i=0; i<10; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
}