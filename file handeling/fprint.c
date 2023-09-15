#include<stdio.h>

int main()
{
    FILE *filePointer;

    filePointer = fopen("newfile.txt","w");
    char name[10] = "Hello";
    int x;
    printf("enter the name : ");
    scanf("%s",name);
    fprintf(filePointer,"%s %s %s %s","I","am",name,"from red and white.");

}