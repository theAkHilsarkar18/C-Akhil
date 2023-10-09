#include <stdio.h>
int main()
{
    char name[10]; // string declaration as array of character
    name[0] = 'A';
    name[1] = 'K';
    name[2] = 'H';
    name[3] = 'I';
    name[4] = 'L'; // Way to assign value.

    printf("%c", name[0]);
    printf("%c", name[1]);
    printf("%c", name[2]);
    printf("%c", name[3]);
    printf("%c\n", name[4]);

    // another way is
    char lastName[] = "Sarkar";
    for (int i = 0; lastName[i] != '\0'; i++)
    {
        printf("%c", lastName[i]);
    }

    // user input in string using loop
    char a[10];
    for (int i = 0; i < 10; i++)
    {
        printf("enter the value : ");
        scanf(" %c", &a[i]);
    }

    // to print full string use the loop

    for (int i = 0; i < 10; i++)
    {
        printf("%c", a[i]);
    }

    return 0;
}