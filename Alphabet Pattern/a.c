#include<stdio.h>
int main()
{
    for(int i=1; i<=8; i++)
    {
        for(int j=1; j<=5; j++)
        {
            if(i==1 || i==4)
            {
                printf("* ");
            }
            else
            {
                if(j==1 || j==5)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}