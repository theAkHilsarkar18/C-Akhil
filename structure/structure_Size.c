// C program to illustrate 
// size of struct 
#include <stdio.h> 
// #pragma pack(1)
struct A { 

    char name[10];//12
    char y[10];//4
    int z;//4
    
    
    
		
}s1; 

int main() 
{ 

	
	printf("Size of struct: %ld", sizeof(s1)); 

	return 0; 
} 
