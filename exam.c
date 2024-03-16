#include<stdio.h>
#include<string.h>

struct Employee
{
	int id;
	float salary;
	char dept[30];
	char name[30];
};

struct Employee addEmployee(void)
{
	struct Employee e1;
	char temp[30];
	
	printf("Enter Employee id : ");
	scanf("%d",&e1.id);
	printf("Enter Employee name : ");
	scanf("%s",&temp);
	strcpy(e1.name,temp);
	printf("Enter department : ");
	scanf("%s",&temp);
	strcpy(e1.dept,temp);
	printf("Enter Employee salary : ");
	scanf("%f",&e1.salary);
	printf("\n");
	return e1;
}

void showEmployee(struct Employee *e1)
{
	printf("emp_id : %d\n",e1->id);
	printf("emp_name : %s\n",e1->name);
	printf("emp_dept : %s\n",e1->dept);
	printf("emp_salary : %.2f\n\n",e1->salary);	                             
}

void upadteEmployee(struct Employee *e1)
{
	char temp[30];
	printf("Enter Employee id : ");
	scanf("%d",&e1->id);
	printf("Enter Employee name : ");
	scanf("%s",&temp);
	strcpy(e1->name,temp);
	printf("Enter department : ");
	scanf("%s",&temp);
	strcpy(e1->dept,temp);
	printf("Enter Employee salary : ");
	scanf("%f",&e1->salary);
	printf("\n");
}


int main()
{
	
	int id,i,n;
	float totalSalary;
	char dept[30];
	printf("Enter total employees : ");
	scanf("%d",&n);
	
	struct Employee e1[n];
	
	for(i=0; i<n; i++)
	{
		e1[i] = addEmployee();
	}
	
	
	//search employee
	printf("Enter id to search employee : ");
	scanf("%d",&id);
	
	for(i=0; i<n; i++)
	{
		if(id==e1[i].id)
		{                 
			showEmployee(&e1[i]);
		}
	}
	
	// update emp data
	printf("Enter id to update employee : ");
	scanf("%d",&id);
	
	for(i=0; i<n; i++)
	{
		if(id==e1[i].id)
		{                 
			upadteEmployee(&e1[i]);
		}
	}
	
	// total salary
	
	for(i=0; i<n; i++)
	{
		totalSalary = totalSalary + e1[i].salary;
	}
	
	printf("Total Employees salary : %.2f\n\n",totalSalary);
	
	// department wise report
	printf("Enter department name : ");
	scanf("%s",&dept);
	
	printf("Department : %s\n\n",dept);
	for(i=0; i<n; i++)
	{
		if(strcmp(e1[i].dept,dept))
		{                 
			upadteEmployee(&e1[i]);
		}
	}
	
	
	

	
	// show all employee
	for(i=0; i<n; i++)
	{
		showEmployee(&e1[i]);
	}
	
	return 0;
	
}

