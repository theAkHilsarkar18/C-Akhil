#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    // set this array in reverse order

    int length = sizeof(a) / sizeof(a[0]);
    int reversedArray[length];

    int j = length - 1;
    for (int i = 0; i < length; i++)
    {
        reversedArray[i] = a[j];
        j--;
    }
    for (int i = 0; i < length; i++)
    {
        printf("%d ", reversedArray[i]);
    }

    return 0;
}