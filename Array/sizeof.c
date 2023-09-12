#include<stdio.h>

int main()
{
    // size of function returns size of variable, how memory its allocate in memory

    int a = 10;
    printf("%d\n",sizeof(a)); // int reserve 4 bytes
    float b;
    printf("%d\n",sizeof(b)); // float reserve 4 bytes
    double c;
    printf("%d\n",sizeof(c)); // double reserve 8 bytes
    char d;
    printf("%d\n",sizeof(d)); // double reserve 1 bytes


    int x[] = {1,2,3,4,5,6,7};
    int length = sizeof(x);
    printf("%d",length/4); // to find length of array
    // total size of array/ size of single of this array
    return 0;
}