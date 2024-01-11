#include<stdio.h>
#include<string.h>

struct student
{
    int stu_id, stu_age, stu_standard;
    char stu_name[50];
    char stu_course[50];
    char stu_city[50];
    char stu_school[50];
};

int main()
{
    struct student s[1];
    char a[50], b[50], c[50], d[50];
    int i = 0;

    printf("\nEnter the details of %d student  \n", i + 1);

    printf("Enter the id of %dst student : ", i + 1);
    scanf("%d", &s[0].stu_id);

    printf("Enter the age of %dst student : ", i + 1);
    scanf("%d", &s[0].stu_age);

    printf("Enter the standard of %dst student : ", i + 1);
    scanf("%d", &s[0].stu_standard);

    printf("Enter the name of %dst student : \n", i + 1);
    scanf(" %[^\n]s", a);  // Note the space before % to consume any leading whitespaces
    strcpy(s[0].stu_name, a);

    printf("Enter the course of %dst student : \n", i + 1);
    scanf(" %[^\n]s", b);
    strcpy(s[0].stu_course, b);

    printf("Enter the city of %dst student : \n", i + 1);
    scanf(" %[^\n]s", c);
    strcpy(s[0].stu_city, c);

    printf("Enter the school of %dst student : \n", i + 1);
    scanf(" %[^\n]s", d);
    strcpy(s[0].stu_school, d);

    printf("\n\nThe %d student details are below\n", i + 1);
    printf("\nStudent's id is : %d\n", s[0].stu_id);
    printf("\nStudent's age is : %d\n", s[0].stu_age);
    printf("\nStudent's standard is : %d\n", s[0].stu_standard);
    printf("\nStudent's name is : %s\n", s[0].stu_name);
    printf("\nStudent's course is : %s\n", s[0].stu_course);
    printf("\nStudent's city is : %s\n", s[0].stu_city);
    printf("\nStudent's school is : %s\n", s[0].stu_school);

    return 0;
}