#include <stdio.h>
#include <string.h>

union doctor
{
    int id;
    char name[40];
    char department[40];
} doc2;

int main()
{
    union doctor doc1;
    
    doc1.id = 2234;
    strcpy(doc1.name, "Ravi Krishna");
    strcpy(doc1.department, "Radiology");
    
    printf("Record 1 details: \n");
    printf("%d \n", doc1.id);
    printf("%s \n", doc1.name);
    printf("%s \n", doc1.department);
    
    printf("\n");
    
    printf("Record 2 details: \n");
    doc2.id = 7593;
    printf("%d \n", doc2.id);
    strcpy(doc2.name, "Shreya Srinivas");
    printf("%s \n", doc2.name);
    strcpy(doc2.department, "Inpatient Service");
    printf("%s \n", doc2.department);
    
    
    return 0;
}
