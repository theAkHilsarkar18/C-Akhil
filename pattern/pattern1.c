#include<stdio.h>

int main()
{

    int x;
    for(int i=1; i<=5; i++)
    {
        x = i;
        for(int j=1; j<=i; j++)
        {
            printf("%d",x++);
        }
        printf("\n");
    }

    return 0;
}