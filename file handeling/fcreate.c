#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *filePointer;
    char name[10];
    filePointer = fopen("file.txt","w");

    if(filePointer==NULL)
    {
        printf("file not open !");
    }
    else
    {
        printf("file opened !");
    }

    printf("\nEnter your name : ");
    gets(name);
    fprintf(filePointer,"%s",name);


    return 0;
}












// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     FILE *filePointer;

//     filePointer = fopen("openfile.txt","w");

//     if(filePointer == NULL)
//     {
//         printf("file not opened !");
//     }
//     else{
//         printf("file opened !");
//     }

//     for (int i = 1; i < 10; i++)
//     {
//         fprintf(filePointer,"%d ",i);
//     }
    

//     return 0;
// }