#include <stdio.h>
int bsearch(int *, int, int);
void main()
{
    int a[100], i, n, m, loc;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    printf("\n\nEnter the elements in ascending order : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the number to be searched : ");
    scanf("%d", &m);
    
    loc = bsearch(a, n, m);
    if (loc == -1)
    {
        printf("The number is not found.");
    }
    else
    {
        printf("The number is found at position %d", loc);
    }
}
int bsearch(int a[], int size, int key)
{
    int l = 0, u = size - 1;
    int mid, loc = -1;
    while (l <= u)
    {
        mid = (l + u) / 2;
        if (key == a[mid])
        {
            loc = mid + 1;
            break;
        }
        else if (key < a[mid])
        {
            u = mid - 1;
        }
        else
            l = mid + 1;
    }
    return loc;
}