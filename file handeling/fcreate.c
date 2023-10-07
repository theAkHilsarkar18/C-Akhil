// #include<stdio.h>
// #include<stdio.h>

// int main()
// {
//     FILE *filePoniter;
//      when yout want to create a file

//     filePoniter = fopen("newfile.txt","w"); // write file

//     if(filePoniter==NULL)
//     {
//         printf("file is not created !");
//     }
//     else{
//         printf("file created successfully !");
//     }
// }



#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *filePointer;

    filePointer = fopen("openfile.txt","w");

    if(filePointer == NULL)
    {
        printf("file not opened !");
    }
    else{
        printf("file opened !");
    }

    for (int i = 1; i < 10; i++)
    {
        fprintf(filePointer,"%d ",i);
    }
    

    return 0;
}