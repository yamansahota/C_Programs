#include <stdio.h>
int main()
{
    int arr[5], i, j, a;
    for (i = 0; i < 5; i++)
    {
        printf("Enter The Value : ");
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = i+1; j < 5; j++)
        {
            if (arr[i] > arr[j])
            {
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
        printf("After Sorting : %d\n",arr[i]);
    }
    printf("Maximum Value in Array is %d",arr[0]);

}