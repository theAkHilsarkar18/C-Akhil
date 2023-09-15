#include<stdio.h>
#include<stdio.h>

int main()
{
    FILE *filePoniter;
    // when yout want to create a file

    filePoniter = fopen("newfile.txt","w"); // write file

    if(filePoniter==NULL)
    {
        printf("file is not created !");
    }
    else{
        printf("file created successfully !");
    }
}