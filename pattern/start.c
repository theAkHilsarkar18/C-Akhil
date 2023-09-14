#include<stdio.h>
int main()
{
    for(int i=1; i<=5; i++)
    {
        for(int k=5; k>=i; k--)
        {
            printf(" ");
        }
        for(int j=i; j<=i; j++)
        {
           if(j==1)
           {
             
           }
           else{
            printf("*");
           }
        }
        for(int l=1; l<=i; l++)
        {
            if(l==1)
            {
                printf(" ");
            }
            else{
                printf("  ");
            }
        }
        for(int m=1; m<=1; m++)
        {
            printf("*");
        }
        printf("\n");
    }
}