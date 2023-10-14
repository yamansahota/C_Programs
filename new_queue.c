#include <stdio.h>
#include<stdlib.h>
int i = -1;
int j = -1;
int arr[5];
int max = 5;
void push()
{
    int num;
    if (i == max - 1)
    {
        printf("Overflow\n");
    }
    else
    {
        if (j == -1)
            j = 0;
        printf("Enter Number : ");
        scanf("%d", &num);
        i++;
        arr[i] = num;
    }
}
void pop()
{
    if (j == -1 || j > i)
    {
        printf("Underflow\n");
    }
    else
    {
        printf("Deleted Element is %d\n", arr[j]);
        j++;
    }
}
void show()
{
    int a;
    if (j == -1)
    {
        printf("Underflow\n");
    }
    else
    {
        for (a = j; a <= i; a++)
        {
            printf("Element in Queue : %d\n", arr[a]);
        }
    }
}
void main()
{
    int hel;
    while (1)
    {
        printf("Enter 1 for Insertion :\n");
        printf("Enter 2 for Deletion :\n");
        printf("Enter 3 for Display :\n");
        printf("Enter 4 for Exit :\n");
        scanf("%d", &hel);
        switch (hel)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid Input Entered.");
            break;
        }
    }
}