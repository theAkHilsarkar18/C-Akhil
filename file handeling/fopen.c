#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *filePointer;
    filePointer = fopen("newfile.txt","r"); // read file 
    filePointer = fopen("filename.txt","r"); // when we try to read already exist file

    if(filePointer==NULL)
    {
        printf("file is not opened !");
    }
    else{
        printf("file opened successfully !");
    }
}