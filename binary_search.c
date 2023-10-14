#include <stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int l = 0, u = 5, m, x, i;
    for (i = 0; i < 5; i++)
    {
        printf("Array : %d\n", arr[i]);
    }
    printf("Enter a number to search : ");
    scanf("%d", &x);
    do
    {
        m = (l + u) / 2;
        if (x == arr[m])
        {
            printf(" in array %d.", arr[i]);
            break;
        }
        else if (x < arr[m])
        {
            l = m - 1;
            printf("Number is present in array %d.", arr[i]);
            break;
        }
        else if (x > arr[m])
        {
            u = m + 1;
            printf("Number is present in array %d.", arr[i+1]);
            break;
        }

    } while (l <= m);

    return 0;
}