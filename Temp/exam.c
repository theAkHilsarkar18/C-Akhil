#include <stdio.h>

struct user
{
	int date, year;
	char name[50];
	int month;
};
main()
{
	struct user s1[3];
	int i;
	char name[50];

	for (i = 0; i <= 3; i++)
	{

		printf("\n enter the date:");
		scanf("%d", &s1[i].date);

		printf("\n enter the name:");
		scanf(" %c", &s1[i].name);

		printf("\n enter the year:");
		scanf("%d", &s1[i].year);
	}
	int age = 0;
	int x;

	FILE = *fp;

	printf("data.txt", "w");
start:

	if (s1[i].date >= 1 && s1[i].date <= 32)
	{
		if (s1[i].month >= 1 && s1[i].month <= 12)

		{
			if (s1[i].year >= 1924 && s1[i].year <= 2024)
			{
				for (x = age; s1[i] <= 2024; x++)
				{
					age++;
				}
			}
			else
			{
				printf("enter the valid year:");
				goto : start;
			}
		}
		else
		{
			printf("enter the valid month:");
			goto : start;
		}
	}
	else
	{
		printf("enter the valid date:");
		goto : start;
	}

	fprintf(fp "age is %d:\n", s1[i].age);
	fprintf(fp "name is %c:\n", s1[i].name);
	fprintf(fp "date is %d:\n", s1[i].date);
	fprintf(fp "year is %d:\n", s1[i].year);

	fprintf(fp "%d,%d,%d,%s", s1[i].month, s1[i].year, s1[i].date, s1[i].name);
}