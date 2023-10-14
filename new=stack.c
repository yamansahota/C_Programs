#include <stdio.h>
#include <stdlib.h>
int i = -1;
int j = -1;
int a[5];
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
        {
            j = 0;
            printf("Enter Value : ");
            scanf("%d\n", &num);
            i++;
            a[i] = num;
        }
    }
}
void pop()
{
    if (j == -1)
    {
        printf("Underflow\n");
    }
    else
    {
        printf("Item popped : %d\n", a[j]);
        j++;
    }
}
void show()
{
    int a,k;
    if (j == -1)
    {
        printf("Empty\n ");
    }
    else
    {
        printf("Elements in Arrway : ");
        for (k = j; k < i; k++)
        {
            printf("%d\n", a[k]);
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