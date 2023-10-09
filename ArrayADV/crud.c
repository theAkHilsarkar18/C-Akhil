#include <stdio.h>
int main()
{

    int n;
    printf("enter size of array : ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the value of a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    int index, value;
    printf("enter the index : ");
    scanf("%d", &index);

    printf("enter the value : ");
    scanf("%d", &value);

    for (int i = n - 1; i >= index; i--)
    {
        a[i + 1] = a[i];
    }
    a[index] = value;
    n++;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    // delete on index
    printf("\n\nenter index for delete from the array : ");
    scanf("%d", &index);

    for (int i = index; i < n; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nsize of array by n %d", n);
    printf("\nsize of array %d", sizeof(a) / sizeof(a[0]));

    return 0;
}
