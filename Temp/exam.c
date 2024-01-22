#include<stdio.h>
#include<conio.h>
#include<string.h>
struct birthdateform
{
	char name[50];
	int birth_d[50];
	int age;
	int month,year,day;
};
void Birthdateform()
{
	FILE *fp;
	fp=fopen("data.txt","w");
	struct birthdateform b1[3];
	char name[50];
	start:
	int length = strlen(name);
	int i;

	int count;
	int check=0,dayck=0,monthck=0,yearck=0,leapyearck=0;
	int month,year,day;
	printf("Enter day:");
	scanf("%d",&day);
	printf("Enter month:");
	scanf("%d",&month);
	printf("Enter year:");
	scanf("%d",&year);
	
    
    if(length>=13 && length<=32)
    {
    	check=1;
    	for(i=0 ; i<length ; i++)
    	{
    		if(birth_d[i]>=1 && birth_d[i]<=31)
    		{
    			dayck=1;
			}
		}
		if(dayck==1)
		{
			for(i=0 ; i<length ; i++)
    		{
	    		if(birth_d[i]>=1 && birth_d[i]<=12)
	    		{
	    			monthck=1;
				}
			}
			if(monthck==1)
			{
				count++;
				for(i=0 ; i<length ; i++)
    			{
		    		if(birth_d[i]>1924 && birth_d[i]<2024)
		    		{
		    			yearck=1;
					}
				}
				year==count;
				if(yearck==1)
				{
					for(i=0 ; i<length ; i++)
    			  	{
			    		if(birth_d[i]>=1924 && birth_d[i]<=2024)
			    		{
			    			int leap ;
							leap= year+=4;
			    			leapyearck=1;
						}
					}
					if(leapyearck=0)
					{
						printf("%d",birth_d);
					}
					else
					{
						printf("Enter year is a leapyear!");
						goto start;
					}
				}
				else
				{
					printf("Enter valid year between 1924 to 2024");
					goto start;
				}
			}
			else
			{
				printf("Enter valid month between jan- dec!!");
				goto start;
			}
		}
		else
		{
			printf("Enter valid day between 1 to 31");
			goto start;
		}
	}
	else
	{
		printf("Enter more then 13 char!");
		goto start;
	}
    
    for(i=0 ; i<3 ; i++)
    {
    	printf("Name :");
		scanf("%[^\n]s",name[i]);
		fprintf(fp,"%s",name);
		
		int age;
		printf("Enter age:");
		scanf("%d",&age[i]);
		fprintf(fp,"%d",age);
		
		int birth_d[50];
		printf("Enter birthdate :");
		scanf("%d",&birth_d);
		fprintf(fp,"%d",birth_d);
		
		printf("\n\n");
		
    	printf("------BIRTHDATE_FORM-----");
    	fprintf(b1"------BIRTHDATE_FORM-----");

    	printf("\nName\t\t: %s",b1.name[i]);
    	fprintf(b1,"\nName\t\t: %s",name[i]);
    	printf("\nBirthdate\t: %d/%d/%d",b1.day[i],b1.month[i],b1.year[i]);
    	fprintf(b1,"Birthdate\t: %d/%d/%d",b1.day[i],b1.month[i],b1.year[i]);
    	printf("\nAge\t\t: %d",b1.age[i]);
    	fprintf(b1,"Age\t\t: %d",b1.age[i]);
	}
    
}

main()
{
	Birthdateform();
}