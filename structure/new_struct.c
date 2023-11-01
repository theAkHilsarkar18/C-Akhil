#include<stdio.h>

void userdata(char name[10])
{
    printf("%s",name);
}

struct Student
{
    char name[10];
};


int main()
{   
    struct Student s1 = {"Akhil"};

    userdata(s1.name);

    return 0;   
}