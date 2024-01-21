#include<stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("new.txt","w");

    char name[20] = "Akhil";
    

    printf("Enter name : ");
    gets(name);

    fprintf(fp,"%s",name);

    return 0;
}