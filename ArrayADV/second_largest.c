// Wap to find second largest number in array
// long way

// #include <stdio.h>

// int main()
// {
//     int a[] = {1, 9, 2, 8, 3, 7, 4, 6, 5, 10};
//     int max = 0;
//     int maxIndex;

//     for (int i = 0; i < 10; i++)
//     {
//         if (a[i] > max)
//         {
//             max = a[i];
//         }
//     }

//     for (int i = 0; i < 10; i++)
//     {
//         if (max == a[i])
//         {
//             maxIndex = i;
//         }
//     }

//     for (int i = maxIndex; i < 10; i++)
//     {
//         a[i] = a[i + 1];
//     }

//     max = 0;

//     for (int i = 0; i < 9; i++)
//     {
//         if (a[i] > max)
//         {
//             max = a[i];
//         }
//     }

//     printf("max = %d", max);
// }

#include <stdio.h>
int main()
{
    int a[] = {1, 4, 2, 8, 3, 7, 4, 6, 9, 10};

    int max = a[0];
    int secondMax = a[1];

    if (max < secondMax)
    {
        max = a[1];
        secondMax = a[0];
    }

    for (int i = 2; i < 10; i++)
    {
        if (a[i] > max)
        {
            secondMax = max;
            max = a[i];
        }
    }

    printf("max = %d | second max = %d", max, secondMax);
}