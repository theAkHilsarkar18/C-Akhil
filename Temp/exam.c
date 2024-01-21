#include <stdio.h>
struct age
{
    int birthdate;
    char a[50];
};
void birthdate(int date, int month, int year)
{
    Day(date, month, year);
}

void Day(int date, int month, int year)
{
    struct age user;

    if (date >= 1 && date <= 31)
    {
        Month(month, year);
    }
    else
    {
        printf("Error : enter the valid date");
        main();
    }
}
void Month(int month, int year)
{
    struct age user;

    if (month >= 1 && month <= 12)
    {
        Year(year);
    }
    else
    {
        printf("Error : enter the valid month");
        main();
    }
}
void Year(int year)
{
    struct age user;

    if (year >= 1924 && year <= 2024)
    {
        Age(year);
    }
    else
    {
        printf("Error : enter the valid year");
        main();
    }
}
int Age(int year)
{
    int i, a = 0;
    for (i = year; i < 2024; i++)
    {
        a++;
    }
    return a;
}
main()
{
    FILE *age;
    age = fopen("exam.txt", "w");
    char a[50];
    int date, month, year;

    struct age user;

    printf("\nname:");
    scanf(" %[^\n]s", &user.a);

    printf("enter birthdate :");
    scanf("%d-%d-%d", &date, &month, &year);

    birthdate(date, month, year);
    int x = Age(year);
    printf("\nName : %s\n", user.a);
    printf("Age : %d\n", x);
    printf("Birthdate : %d-%d-%d\n", date, month, year);

    fprintf(age, "\nName : %s\n", user.a);
    fprintf(age, "Age : %d\n", x);
    fprintf(age, "Birthdate : %d-%d-%d\n", date, month, year);
}