#include <stdio.h>
int main()
{

    float arr[4][4], x[3], sum = 0, div;
    int a, b, c, n, m = 0;

    printf("Enter number of varaables an equataon: ");
    scanf("%d", &n);

    for (a = 0; a < n; a++)
    {
        for (b = 0; b <= n; b++)
        {
            printf("Enter at %d %d: ", a + 1, b + 1);
            scanf("%f", &arr[a][b]);
        }
    }s

    for (a = 0; a < n; a++)
    {
        for (b = 0; b <= n; b++)
        {
            printf("%f  ", arr[a][b]);
        }
        printf("\n");
    }

    printf("\n\nAfter Solving the equations :\n\n ");

    for (c = 0; c < n - 1; c++)
    {
        for (a = c + 1; a < n; a++)
        {
            for (b = n; b >= c; b--)
            {
                arr[a][b] = arr[a][b] - (arr[a][c] / arr[c][c]) * (arr[c][b]);
            }
        }
    }

    for (a = 0; a < n; a++)
    {
        for (b = 0; b <= n; b++)
        {
            printf("%f  ", arr[a][b]);
        }
        printf("\n");
    }

    for (b = n - 1; b >= 0; b--)
    {
        if (b < 2)
        {
            for (int l = n - 1; l > b; l--)
            {
                arr[b][l] *= x[l];
            }
        }

        for (c = 0; c < n; c++)
        {
            if (c == b)
            {
                div = arr[b][c];
            }
            else
            {
                sum += arr[b][c];
            }
        }

        arr[b][n] = arr[b][n] - sum;
        x[b] = arr[b][n] / div;
        sum = 0;
    }

    for (a = 0; a < n; a++)
    {
         
        printf("\nx%d=%f\n", (a + 1), x[a]);
    }

    return 0;
}