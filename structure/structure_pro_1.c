#include<stdio.h>
#include<string.h>
struct Students
{
    int id;
    int age;
    char name[10];
}raj,jay;

union Home
{
    int no;
    char name[10];
}A;

enum Fruits
{
    apple,mango,banana
}f2;


int main()
{

    struct Students s1[10];

    s1[0].age = 18;
    s1[0].id = 1;

    printf("%d %d",s1[0].id,s1[0].age);

    // enum Fruits f1;
    // f1 = mango;
    // f2 = banana;

    // printf("%d",f2);

    // struct Students krish;
    // krish.id = 10;
    // krish.age = 18;
    // strcpy(krish.name,"Krish");

    // raj.id = 11;
    // raj.age = 23;
    // strcpy(raj.name,"Raj");

    // strcpy(A.name,"Villa");
    // A.no = 102;

    // printf("%s\n",A.no,A.name);
    // printf("%d %d %s\n",krish.id,krish.age,krish.name);
    // printf("%d %d %s\n",raj.id,raj.age,raj.name);


    
    return 0;
}