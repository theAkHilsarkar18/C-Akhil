#include <stdio.h>
#include <string.h>

struct dob
{
	int day, month, year;
	char name[25];
};
main()
{
	FILE *dob;
	char name[25];
	int day, month, year;
	struct dob D[3];

	int i;

	for (i = 1; i <= 3; i++)
	{
		printf("Enter your name : ");
		scanf("%d", name);
		strcpy(D[i].name, name);
		printf("\nEnter the day : ");
		scanf("%d", &D[i].day);

		for (i = 1; i <= 3; i++)
		{
			if (D[i].day <= 0 && D[i].day > 31)
			{
				printf("\nError!....");
			}

			break;
		}

		printf("\nEnter the month : ");
		scanf("%d", &D[i].month);

		for (i = 1; i <= 3; i++)
		{
			if (D[i].month >= 0 && D[i].month > 12)
			{
				printf("\nError!....");
			}

			break;
		}

		printf("\nEnter the year : ");
		scanf("%d", &D[i].year);

		for (i = 1; i <= 3; i++)
		{

			if (D[i].year > 1924 && D[i].year > 2024)
			{
				printf("\nError!....");
			}
		}
		break;

		printf("\n");
		printf("\n");
	}

	for (i = 1; i <= 3; i++)
	{
		printf("\nYour name : %s", D[i].name);
		printf("\nBirth Date : %d", D[i].day);
		printf("\nMonth : %d", D[i].month);
		printf("\nYear : %d", D[i].year);
	}
}