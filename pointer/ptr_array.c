#include<stdio.h>
void swappUsingArray(int *a[]);
int main()
{
    int a1 = 10;
    int a2 = 20;
    int a3 = 30;

    int *array[5] ={&a1,&a2,&a3};
    printf("%d",a1);
    swappUsingArray(&array[5]);
    printf("%d",a1);
}

void swappUsingArray(int *a[])
{
    *a[0] = 20;
    printf("%d ",*a[0]);
}