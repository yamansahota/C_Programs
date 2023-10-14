#include <stdio.h>
#include<stdlib.h>
int i = -1;
int arr[5];
int max = 5;
void push()
{
    if (i == max - 1)
    {
        printf("Stack is full\n");
    }
    else
    {
        i++;
        printf("Enter Value : ");
        scanf("%d", &arr[i]);
    }
}
void pop()
{
    if (i == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        i--;
        printf("Value is popped\n");
    }
}
void peek()
{
    if (i == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("Value in stack is %d", arr[i]);
    }
}
void disp()
{
     if (i == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        for(int i=0;i<5;i++)
        {
            ("%d\n",arr[i]);
        }
    }
}
int main()
{
    int ch;
    while (1)
    {
        printf("Enter 1 for insert\nEnter 2 for pop\nEnter 3 for peek\nEnter 4 for display\nEnter 5 for exit\n");
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
            peek();
            break;
             case 4:
            disp();
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid Input\n");
            break;
        }
    }
}