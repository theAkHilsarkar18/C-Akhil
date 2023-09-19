#include<stdio.h>

int main()
{
    int a[3][3] = {{10,20,30},{30,40,50},{50,60,90}};
    int max = 0;
    int length = sizeof(a)/sizeof(a[0]); // ans = 3 , total length = 9, divide by a[0][0]

    for(int i=0; i<length; i++)
    {
        for(int j=0; j<length; j++)
        {
            if(max < a[i][j])
            {
                max = a[i][j];
            }
        }
    }

    printf("maximum element from the 2D Array : %d",max);
    return 0;
}