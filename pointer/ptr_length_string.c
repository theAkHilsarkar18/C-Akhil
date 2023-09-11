#include <stdio.h>
int main()
{
    char name[10] = "Akhil";
    int len = strlen(name);
    int *ptr = &name[0];

    printf("%d", *ptr);
}