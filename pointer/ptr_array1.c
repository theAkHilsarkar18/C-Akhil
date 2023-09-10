#include <stdio.h>
int main()
{
    // Q.1 Write a Program to find the square of each element of a given 1D array using a Pointer.
    // For example,
    // Input:
    // Enter the array's size: 5

    // Enter array's elements:
    // a[0] = 2
    // a[1] = 4
    // a[2] = 1
    // a[3] = 3
    // a[4] = 7

    // Output:
    // Square of each element:
    // 4, 16, 1, 9, 49
    int array[5] = {2, 3, 4, 5};
    int *ptr1 = &array[0];
    int sqr = *ptr1 * *ptr1;
    printf("%u", sqr);
}