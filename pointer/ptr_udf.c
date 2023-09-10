#include <stdio.h>

// function declaration
// call by value function
void square(int a, int b);
// call by reference function
void _square();
int main()
{
    int a = 2;
    int b = 4;
    square(a, b);
}

void square(int a, int b)
{
    a = a * a;
    b = b * b;
    printf("a = %d, b = %d\n", a, b);
}