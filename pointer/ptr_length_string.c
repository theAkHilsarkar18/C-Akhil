#include<stdio.h>

int main()
{
    char name[10] = "Akhil";
    char *ptr;
    ptr = name;

    printf("%d\n",ptr);
    printf("%d",&name[0]);
    
    return 0;
}