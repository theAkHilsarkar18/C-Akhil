#include <stdio.h>

int sum(int a, int b);

int main()
{
    printf("%d", sum(10, 20));
}

int sum(int a, int b)
{
    return a + b;
}