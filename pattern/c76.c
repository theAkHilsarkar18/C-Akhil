
//        1
//      2 1
//    3 2 1
//  4 3 2 1
//5 4 3 2 1

#include<stdio.h>
main()
{
	int i,j,k;
	
	for(i=1; i<=5; i++)
	{
		
		for(k=5; k>=i; k--)
		{
			printf(" ");
		}
		
		for(j=i; j>=1; j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
