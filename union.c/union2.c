#include<stdio.h>
#include<string.h>


struct School
{
    union student
    {
        int id;
        char name[50];
    };
};

int main()
{
    struct School s1;
    s1.id = 12;
    strcpy(s1.name,"Akhil");

    printf("%d\n",s1.id);
    printf("%s",s1.name);
}