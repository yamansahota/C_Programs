#include <stdio.h>
#include <conio.h>
void main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("\n%d",i);
        if(i==3)
        {
            printf("\nOk Bye");
            break;
        }
    printf("\nNext");
    }
    getch();
}