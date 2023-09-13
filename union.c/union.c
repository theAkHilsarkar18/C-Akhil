#include<stdio.h>
#include<string.h>
union student
{
    int id;
    char name[10];
    float percentage;
}stu1;

int main()
{
    union student s1 = {1,"Het",89.63};
    stu1.id = 2;
    strcpy(stu1.name,"Akhil");
    stu1.percentage = 98.56;

    printf("%d %s %f\n",s1.id,s1.name,s1.percentage);
    printf("%d %s %f\n",stu1.id,stu1.name,stu1.percentage);
    return 0;
}