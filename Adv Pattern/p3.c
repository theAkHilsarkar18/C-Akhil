#include<stdio.h>

int main()
{
    int n = 1;
    
    int x = 1;
    int y = 1;
    for(int j=1; j<=3; j++)
    {
        for(int i=1; i<=3; i++)
        {
            printf("%d ",x);
            if(y%2==0)
            {
                x = x + 1;
            }
            else{
                
                x = x * 10;
            }
            y++;
        }
        x = 100;
        printf("\n");
    }
    
    return 0;
}