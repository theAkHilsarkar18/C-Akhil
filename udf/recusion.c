#include <stdio.h>

int sum(int x);
int main()
{
    printf("%d", sum(5));
    return 0;
}

int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
  return n + sum(n-1);  
}
// n=5 , n!=1->false , return 5 + 4 + 3 + 2 + 1