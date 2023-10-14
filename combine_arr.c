#include<stdio.h>
int main()
{
    int a[]={1,2,3,4};
    int b[]={5,6,7,8};
    int c[10];
    int i;
    for ( i = 0; i < 5; i++)
    {
        c[i]=a[i]+b[i];
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n",c[i]);
    }
}