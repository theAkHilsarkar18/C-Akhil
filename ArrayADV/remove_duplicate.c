#include<stdio.h>
int main()
{
    int a[5] = {1,2,3,2,4};
    int index = 0;

    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(a[i]==a[j])
            {
                a[j] = a[j+1];
            }
        }
    }
   
   for(int i=0; i<5; i++)
   {
        printf("%d ",a[i]);
   }
}