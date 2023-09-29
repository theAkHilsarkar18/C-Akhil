#include<stdio.h>
int main()
{
    for(int i=1; i<=5; i++)
    {
        for(int k=5; k>=i; k--)
        {
            printf("  ");
        }
        for(int j=1; j<=i; j++)
        {
            printf("%d ",j);
        }
        for(int l=i-1; l>=1; l--)
        {
            printf("%d ",l);
        }
        printf("\n");
    }
}