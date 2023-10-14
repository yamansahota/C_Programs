#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *top;
void push()
{
    int data;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("Underflow\n");
    }
    else
    {
        printf("Enter Value : ");
        scanf("%d", &data);
        if (top == NULL)
        {
            ptr->data = data;
            ptr->link = NULL;
            top = ptr;
        }
        else
        {
            ptr->data = data;
            ptr->link = top;
            top = ptr;
        }
        printf("\nItem pushed successfully : %d .\n", data);
    }
}
void pop()
{
    int item;
    struct node *ptr;
    if (top == NULL)
    {
        printf("Underflow\n");
    }
    else
    {
        item = top->data;
        ptr = top;
        top = top->link;
        free(ptr);
        printf("Item popped successfully.\n");
    }
}
void display()
{
    int i;
    struct node *ptr;
    ptr = top;
    if (ptr == NULL)
    {
        printf("Stack is Empty.\n");
    }
    else
    {
        printf("Stack elements are : \n");
        while (ptr != NULL)
        {
            printf("%d\n", ptr->data);
            ptr = ptr->link;
        }
    }
}
void main()
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
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid Input\n");
            break;
        }
    }
}