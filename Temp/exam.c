#include<stdio.h>
#include<string.h>
struct deatil
{
	char name[50];
	int month;
	int date;
	int year;	
};
int main()
{
	struct deatil s[3];
	int i,x,k;
	int age=0;
	FILE *fp;
	fp = fopen("new.txt","w");
	
	
	for(i=0;i<3;i++)
	{
	age=0;
	start:
	printf("enter your name :");
	scanf(" %[^\n]s",s[i].name);
	printf("enter your date :");
	scanf(" %d",&s[i].date);
	printf("enter your month :");
	scanf(" %d",&s[i].month);
	printf("enter your year :");
	scanf(" %d",&s[i].year);
	
	
	if(s[i].date>=1&&s[i].date<=31)
	{
		if(s[i].month>=1&&s[i].month<=12)
		{
			if(s[i].year>=1924&&s[i].year<=2024)
			{
				for(x=s[i].year;x<=2024;x++)
				{
					age++;
				}
			}
			else
			{
				printf("enter a valid year");
				goto start;
			}
		}
		else
		{
			printf("enter a valid month");
			goto start;
		}	
	}
	else
	{
		printf("enter a valid date");
		goto start;
	}
		printf("age is :%d\n",age);
		fprintf(fp,"Name : %s\n",s[i].name);
		fprintf(fp,"Birth-Date : %d/%d/%d\n",s[i].date,s[i].month,s[i].year);
		fprintf(fp,"Age : %d years\n\n",age);	
}

	return 0;
		
	
	
}