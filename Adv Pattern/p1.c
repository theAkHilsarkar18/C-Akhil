#include <stdio.h>

int main()
{
    // 9,3,5,7,1
    int n = 93571;
    for (int i = 1; i <= 5; i++)
    {
        printf("%d\n", n);
        n /= 10;
    }
    return 0;
}