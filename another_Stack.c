#include <stdio.h>
#include <stdlib.h>
int i = -1;
int max = 5;
int a[5];
void push()
{
    if (i == max - 1)
    {
        printf("Overflow\n");
    }
    else
    {
        i++;
        printf("\nEnter Number : ");
        scanf("%d", &a[i]);
    }
}
void pop()
{
    if (i == -1)
    {
        printf("Underflow\n");
    }
    else
    {
        i--;
        printf("Item popped \n");
    }
}
void disp()
{
    if (i == -1)
    {
        printf("Undrflow\n");
    }
    else
        for (int i = 0; i < max; i++)
        {
            printf("%d\n", a[i]);
        }
}
int main()
{
    int ch;
    while (1)
    {
        printf("Enter 1 for insert\nEnter 2 for pop\nEnter 3 for display\nEnter 4 for exit\n");
        printf("Enter Choices...\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            disp();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid Input\n");
            break;
        }
    }
}