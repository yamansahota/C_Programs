#include <stdio.h>
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return (n * fact(n - 1));
    }
}
int main()
{
    int num, f;
    printf("Enter Number : ");
    scanf("%d", &num);
    f = fact(num);
    printf("Factorial of number %d is %d", num, f);
}