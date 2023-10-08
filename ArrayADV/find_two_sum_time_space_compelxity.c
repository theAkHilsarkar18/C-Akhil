// #include <stdio.h>
// int main()
// {
//     int a[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
//     int length = sizeof(a) / sizeof(a[0]);
//     int target = 14;
//     // normal way : compare all variable with all
//     for (int i = 0; i < length; i++)
//     {
//         for (int j = i + 1; j < length; j++)
//         {
//             if (a[i] + a[j] == target)
//             {
//                 printf("(%d,%d)", a[i], a[j]);
//                 goto end;
//             }
//         }
//     }
// end:
//     return 0;
// }
