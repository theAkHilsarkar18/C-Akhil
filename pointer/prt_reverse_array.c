#include<stdio.h>

int main()
{
    int a[5] = {1,2,3,4,5};
    int b[5];
    int length = sizeof(a)/sizeof(a[0]);
    int *ptr = &a[length-1];
    for(int i=0; i<length; i++)
    {
        b[i] = *ptr;
        printf("%d ",b[i]);
        ptr = ptr - 1;
    }
    

    return 0;
}