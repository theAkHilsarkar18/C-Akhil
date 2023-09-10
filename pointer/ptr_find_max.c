#include <stdio.h>
int main()
{
    // wap to find maximum number using pointer.
    int a = 10;
    int b = -30;
    int c = 0;

    int *ptr1 = &a;
    int *ptr2 = &b;
    int *ptr3 = &c;

    if (*ptr1 > *ptr2)
    {
        if (*ptr1 > *ptr3)
        {
            printf("%d is maximum", *ptr1);
        }
        else
        {
            printf("%d is maximum", *ptr2);
        }
    }
    else
    {
        if (*ptr2 > *ptr3)
        {
            printf("%d is maximum", *ptr2);
        }
        else
        {
            printf("%d is maximum", *ptr3);
        }
    }
}