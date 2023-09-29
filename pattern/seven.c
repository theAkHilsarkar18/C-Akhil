#include<stdio.h>

int main()
{
    for(int i=11; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            if(i==11)
            {
                printf("7");
            }
            else if(j==i)
            {
                printf("7");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}