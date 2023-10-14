#include <stdio.h>
int main()
{
    int arr[5], i, x;
    for (i = 0; i < 5; i++)
    {
        printf("Enter Then Value : ");
        scanf("%d", &arr[i]);
    }
    printf("Enter The Value to check whether it's in array or not : ");
    scanf("%d", &x);
    for (i = 0; i < 5; i++)
    {
        if (arr[i] == x)
        {
            printf("Value is present in array.");
            break;
        }
        else
        {
            printf("Not in array.");
            break;
        }
    }
    return 0;
}