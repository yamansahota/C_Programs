#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, big;
    printf("\nEnter the two number : ");
    scanf("%d%d",&a,&b);
    big = (a>b)?a:b;
    printf("The greater number = %d",big);
    getch();
}