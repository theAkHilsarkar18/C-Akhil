#include<stdio.h>
#include<string.h>

int main()
{
    char name[10];
    int length = 0;
    printf("Enter your name : ");
    scanf("%s",name);

    for(int i=0; name[i]!='\0'; i++)
    {
        length ++;
    }

    printf("length is %d",length);
    return 0;
}