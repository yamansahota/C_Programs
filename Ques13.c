#include <stdio.h>
int main()
{
    int i, j, k, n;
    printf("Enter the number :");
    scanf("%d", &n);
    for (i = n; i >= n; i--)
    {
        for (j = 1; j <= n; j++)
        {
            if (j <= i)
                printf("%d", j);
            else
                printf(" ");
        }
        for (j = n; j >= 1; j--)
        {
            if (j <= i)
                printf("%d", j);
            
        }
        printf("\n");
    }
    return 0;
}