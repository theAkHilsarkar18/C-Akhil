// // WAP to get the array and print in acending order.
// #include<stdio.h>
// int main()
// {
//     // arrange this array in acending : low to high
//     int a[10] = {1,2,4,6,7,3,4,6,8,9};
//     int temp = 0;

//     for(int i=0; i<10; i++)
//     {
//         for(int j=i+1; j<10; j++)
//         {
//             if(a[i]>a[j])
//             {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }

//     for(int i=0; i<10; i++)
//     {
//         printf("%d ",a[i]);
//     }
// }

#include <stdio.h>
int main()
{

    int a[] = {9, 1, 8, 2, 7, 3, 6, 4, 5, 10};// 1 8 9 
    int temp;
    for (int i = 0; i < 10; i++)//1
    {
        for (int j = i + 1; j < 10; j++)//2
        {
            if (a[i] > a[j]) // 9 > 1 // 9 > 8
            {
                temp = a[i];  // 9
                a[i] = a[j]; // 8
                a[j] = temp; // 9
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}