// C program to illustrate 
// size of struct 
#include <stdio.h> 
// #pragma pack(1)
union A { 

    
    char y[10];//4
    int z;//4
    char name[10];//12
		
}s1; 

enum week
{
    monday = 10,
    t = 20,
    x = 20,
    y = 20,
    z = 20,
};

int main() 
{ 

    char name[10];
    printf("enter your name : ");
    scanf("%[^\n]",name);

    printf("%s",name);


    // enum week day;
    // day = monday;
    // printf("%d",day);

	// printf("\n\n");
	// printf("Size of struct: %ld", sizeof(day)); 

	return 0; 
} 
