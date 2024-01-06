#include <stdio.h>

int main()
{
    int y = 1;
    int x = 1;
    for (int i = 1; i <= 10; i++)
    {
        for (int k = 1; k < i; k++)
        {
            printf("   ");
        }
        for (int j = i; j <= 10; j++)
        {

            if(x>=0 && x<=9)
            {
                printf("%d  ", x);
            }
            else{
                printf("%d ", x);
            }
            x = x + j;
        }
        y = y + i;
        x = i + y;
        printf("\n");
    }

    return 0;
}