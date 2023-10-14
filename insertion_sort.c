#include <stdio.h>
void main()
{
    int arr[5], i, j, temp;
    printf("Enter Elements in array : ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d\n", &arr[i]);
    }

    for (i = 0; i < 5; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (temp <= arr[j] && (j >= 0))
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
    printf("\nAfter Sort the array : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
}