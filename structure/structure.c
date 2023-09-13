#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[10];
    float salary;
}emp1,emp2,emp3;

int main()
{
    struct employee emp = {1,"Aman",10000};
    emp1.id = 1;
    emp1.salary = 1234;
    strcpy(emp1.name,"Raj");
    printf("%d %s %.2f\n",emp1.id,emp1.name,emp1.salary);
    printf("%d %s %.2f\n",emp.id,emp.name,emp.salary);


    return 0;
}