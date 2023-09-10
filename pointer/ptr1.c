#include <stdio.h>
int main()
{
    // format specifier for pointer
    // %x / %X for hexadecimal
    // %d for int
    // %p
    // %u
    int age = 18;    // variable
    int *ptr = &age; // a pointer variable
    int **ptr1 = &ptr;
    printf("%d\n", ptr);
    printf("%d\n", &age);
    printf("%d\n", *ptr);
    printf("%d\n", &ptr);
    printf("%d\n", ptr1);
    printf("%d\n", **ptr1);
    int *a = malloc(20 * sizeof(int));
    int b = sizeof(char);
    printf("%d\n", a);
    printf("%d\n", b);
}