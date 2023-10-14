#include <stdio.h>
int linear_search(int* arr[], int lb, int ub, int x)
{
    int i;
    for (i = lb; i <= ub; i++)
    {
        if (arr[i] == x)
        {
            return 1;
        }
        return 0;
    }
}
int main()
{
    int i;
    int arr[5];
    int l = 0;
    int u = 5;
    int num;
    for (i = 0; i < 5; i++)
    {
        printf("Enter Value : ");
        scanf("%d", &arr[i]);
    }
    printf("Enter the first bound : ");
    scanf("%d", &l);
    printf("Enter the last bound : ");
    scanf("%d", &u);
    int result=linear_search(arr[5], l,  u, num);
    return 0;
}