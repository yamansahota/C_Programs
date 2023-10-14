#include <stdio.h>
int main()
{
    int a[100], b[100], c[200];
    int x1, x2, x3, i;
    printf("Enter size of the 1st array : ");
    scanf("%d", &x1);

    printf("\nEnter Elements of 1st Array : ");
    for (int i = 0; i < x1; i++)
    {
        scanf("%d \n", &a[i]);
    }

    printf("\nEnter size of the 2nd array : ");
    scanf("%d", &x2);

    printf("\nEnter Elements of 2nd Array : ");
    for (int i = 0; i < x2; i++)
    {
        scanf("%d \n", &b[i]);
    }

    x3 = x1 + x2;
    for (i = 0; i < x1; i++)
    {
        c[i] = a[i];
    }
    for (i = 0; i < x2; i++)
    {
        c[i + x1] = b[i];
    }

    printf("\n---Merged Array---\n");
    for (i = 0; i < x3; i++)
    {
        printf("%d \n", c[i]);
    }
}