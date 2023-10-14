#include <stdio.h>
int i = -1;
void push(int[], int);
void pop(int[]);
void peek(int[]);

void push(int arr[], int size)
{
    if (i == size - 1)
    {
        printf("Stack is Full.\n");
    }
    else
    {
        i++;
        printf("Enter Value : ");
        scanf("%d", &arr[i]);
    }
}
void pop(int arr[])
{
    if (i == -1)
    {
        printf("Stack is Empty.\n");
    }
    else
    {
        i--;
    }
}
void peek(int arr[])
{
    if (i == -1)
    {
        printf("Stack is empty.\n");
    }
    else
        printf("%d", arr[i]);
}
void main()
{
    int arr[5], n;
    while (1)
    {
        printf(" Enter 1 for push \n Enter 2 for pop \n Enter 3 for peek \n Enter  for Exit. \n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            push(arr, 5);
            printf("\n------------------------------------\n");
             break;
        case 2:
            pop(arr);
            printf("\n------------------------------------\n");
             break;
        case 3:
            peek(arr);
            printf("\n------------------------------------\n");
             break;
        case 4:
             exit(0);
        default:
            printf("Invalid Input ");
            printf("\n------------------------------------\n");
             break;
        }
    }
}