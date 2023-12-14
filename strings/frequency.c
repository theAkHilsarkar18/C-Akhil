#include<stdio.h>
#include<string.h>
int main()
{
    // find frequncy of each character

    char name[20] = "AkhilAh";
    int frequncy = 1;

    // printf("Enter your name : ");
    // gets(name);
    
    int length = strlen(name);

    for(int i=0; i<length; i++)
    {
        for(int j=i+1; j<length; j++)
        {
            if(name[i]==name[j])
            {
                frequncy++;
                name[j] = 0;
            }
        }
        if(name[i]!=0)
        {
            printf("%c -> %d\n",name[i],frequncy);
        }
        frequncy = 1;
    }

    
    


    return 0;
}