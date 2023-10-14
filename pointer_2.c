#include<stdio.h>
void disp(int *y)
{
    (*y)++;
    printf("y= %d",*y);
}
void main()
{
    int x=56;
    disp(&x);
    printf("\n x= %d",x);
}