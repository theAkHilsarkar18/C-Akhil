// right rotate array

#include <stdio.h>
int main()
{

    int a[5] = {1, 2, 3, 4, 5};

    int temp = a[0];
    int index = 0;

    for (int i = 5 - 1; i >= 0; i--)
    {
        a[4 - i] = a[i];//a[4-4 0] = a[4]//a[4-3 1] = a[3]//a[4-2 2] = a[2] // a[4-1 3] = a[1] // a[4-0] = a[0]
        //5,4,3,4,5
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}