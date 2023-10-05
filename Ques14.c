#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = n; i >= 0; i--)
    {
        for (j = 1; j <= i; j++)
            printf("*", j);
        printf("\n");
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j <= i; j++)
            printf("*", j);
        printf("\n");
    }
    getch();
}
