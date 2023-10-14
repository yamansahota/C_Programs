#include<stdio.h>
int x=1;
void disp()
{
    if (x<=5)
    {
        x++;
        disp();
        printf("%d\t",x);
    }
}
void main()
{
    disp();
}