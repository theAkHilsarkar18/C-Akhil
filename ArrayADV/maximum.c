#include<stdio.h>

int main()
{
    int a[] = {1,34,56,7,2,4,5,67,90,3,1,35,5,6};
    int length  = sizeof(a)/sizeof(a[0]);
    int max = 0;

    for(int i=0; i<length; i++)
    {
        for(int j=i+1; j<length; j++)
        {
            if(a[i]>a[j])
            {   
                max = a[i];
            }
        }
    }
    printf("maximum element is : %d",max);


}