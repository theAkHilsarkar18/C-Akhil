#include<stdio.h>

int main()
{
    int a[] = {34,56,7,2,4,5,67,90,3,1,35,5,6,0};
    int length = sizeof(a)/sizeof(a[0]);
    int min = a[0];

    for(int i=0; i<length; i++)
    {
        if(min>a[i])
        {
            min = a[i];
        }
    }
    printf("minimum element of the array : %d",min);


    return 0;
}