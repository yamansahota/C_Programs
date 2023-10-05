#include <stdio.h>
#include <conio.h>
void main()
{
    int i;
    float f;
    double d;
    printf("Enter the value of i in integer : ");
    scanf("%d",&i);
    printf("Enter the value of f in float : ");
    scanf("%f",&f);
    d = i * f ;
    printf("\n Value of d = %lf",d);
    getch();
}