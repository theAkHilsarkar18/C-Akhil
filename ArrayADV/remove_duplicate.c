#include<stdio.h>
int main()
{
    int a[5] = {1,2,1,2,1};//1,2,2,1,1
    int index = 0;

    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(a[i]==a[j])
            {
               for(int k=j; k<5; k++)
               {
                    a[k] = a[k+1];
               }
            }
        }
    }
   
   for(int i=0; i<5; i++)
   {
        printf("%d ",a[i]);
   }
}