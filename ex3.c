#include <stdio.h>
#include<conio.h>
void main()
{
    char ch;
    printf("\nPress any key to continue");
    getch();
    printf("\nEnter any character : ");
    ch = getche();
    printf("\nEntered character is :");
    putchar(ch);
    printf("\nEnter another character : ");
    ch = getchar();
    printf("\nEntered character now is : ");
    putchar(ch);
    getch();

}