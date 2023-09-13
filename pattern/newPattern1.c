#include<stdio.h>
int main()
{
    for(int i=1; i<=5; i++)
    {
        for(int k=5; k>=i; k--)
        {
            printf(" ");
        }
        for(int l=i; l>=1; l--)
        {
            printf("%d",l);
        }
        for(int j=i; j>=1; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}