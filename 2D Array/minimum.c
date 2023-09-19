#include<stdio.h>

int main()
{
    int a[3][3] = {{10,20,30},{30,4,50},{50,60,90}};
    int length = sizeof(a)/sizeof(a[0]);
    int min = a[0][0];

    for(int i=0; i<length; i++)
    {
        for(int j=0; j<length; j++)
        {
            if(min > a[i][j])
            {
                min = a[i][j];
            }
        }
    }
    printf("minimum element from the 2D array : %d",min);
    return 0;
}