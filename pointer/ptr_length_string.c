#include <stdio.h>
int main()
{
    // wap to find length of string using ptr

    char name[10] = "Red&White";
    char *ptr = name;
    int count = 0;
    while(*ptr!='\0')
    {
        count++;
    }
    printf("%d",count);
    return 0;
}