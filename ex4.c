#include <stdio.h>
#include <conio.h>
int main()
{
    int a , b, s, p, d, r, div;
    printf("Enter the value of a and b : ");
    scanf("%d%d",&a,&b);
    s =  a+b;
    d = a-b;
    p = a * b;
    div = a/b;
    r = a%b;
    printf("\nAddition = %d",s);
    printf("\nSubtraction = %d", d);
    printf("\nMultiplication = %d",p);
    printf("\nDivision = %d",div);
    printf("\nRemainder = %d", r);
    getch();
}