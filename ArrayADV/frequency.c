#include <stdio.h>
int main()
{
    // 3. Write a program in C to count the frequency of each element of an array.
    // check how many number repeats how many times in this array.

    int a[10] = {1, 2, 3, 4, 2, 4, 2, 5, 7, 1};
    int count;

    for (int i = 0; i < 10; i++)
    {
        count = 1;
        for (int j = i + 1; j < 10; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                a[j] = -1;
            }
        }
        if (a[i] != -1)
        {
            printf("%d -> %d\n", a[i], count);
        }
    }
}