#include <stdio.h>

struct name_birth
{
    char name[50];
    int birth_date;
    int birth_month;
    int birth_year;
};

void birth(int birth_date, int birth_month, int birth_year)
{

    if (birth_year >= 1924 && birth_year <= 2024)
    {
        if (birth_year % 4 == 0)
        {
            if (birth_month == 02)
            {
                if (birth_date >= 1 && birth_date <= 29)
                {
                    printf("Birth Date : %d/%d/%d\n", birth_date, birth_month, birth_year);
                }
                else
                {
                    printf("your date is not allow date between 1 to 29\n");
                }
            }
            else
            {
                printf("Enter the correct month\n");
            }
        }
        else
        {
            if (birth_month >= 01 && birth_month <= 12)
            {
                if (birth_month % 2 == 1)
                {
                    if (birth_date >= 1 && birth_date <= 31)
                    {
                        printf("Birth Date : %d/%d/%d\n", birth_date, birth_month, birth_year);
                    }
                    else
                    {
                        printf("your date is not allow date between 1 to 31\n");
                    }
                }
                else if (birth_month == 02)
                {
                    if (birth_date >= 1 && birth_date <= 28)
                    {
                        printf("Birth Date : %d/%d/%d\n", birth_date, birth_month, birth_year);
                    }
                    else
                    {
                        printf("your date is not allow date between 1 to 28\n");
                    }
                }
                else
                {
                    if (birth_date >= 1 && birth_date <= 30)
                    {
                        printf("Birth Date : %d/%d/%d\n", birth_date, birth_month, birth_year);
                    }
                    else
                    {
                        printf("your date is not allow date between 1 to 30\n");
                    }
                }
            }
        }
    }
    else
    {
        printf("Enter correct input !!\n");
    }
}

void age(int birth_year)
{
    int i;
    int age = 0;

    for (i = birth_year; i < 2024; i++)
    {
        age++;
    }
    printf("Age is : %d", age);
}

main()
{
    FILE *fp;

    fp = fopen("exam.txt", "w");

    char name[50];
    int birth_date;
    int birth_month;
    int birth_year;

    struct name_birth name_num[3];

    int i;

    for (i = 0; i < 1; i++)
    {
        printf("Enter the name : ");
        scanf(" %[^\n]s", &name);
        printf("Enter the birth date : ");
        scanf("%d", &birth_date);
        printf("Enter the birth month : ");
        scanf("%d", &birth_month);
        printf("Enter the birth year : ");
        scanf("%d", &birth_year);
    }

    for (i = 0; i < 1; i++)
    {
        fprintf(fp, "Name : %s\n", name_num[i].name);
        birth(birth_date, birth_month, birth_year);
        fprintf(fp, "Birth Date is : %d/%d/%d", birth_date, birth_month, birth_year);
        age(birth_year);
        fprintf(fp, "Age is : %d", age);
    }
}