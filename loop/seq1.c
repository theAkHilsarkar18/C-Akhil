#include <stdio.h>
int main()
{
    int x = 0;
    for (int i = 1; i <= 5; i++)
    {
        x = (x * 10) + 1;
        printf("%d ", x);
    }
    return 0;
}