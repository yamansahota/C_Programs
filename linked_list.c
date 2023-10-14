#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
}
    *head = NULL;

void create()
{
    char ch;
    do
    {
        struct node *next, *current;
        next = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter data : ");
        scanf("%d", &next->info);
        next->link = NULL;
        if (head == NULL)
        {
            head = next;
            current = next;
        }
        else
        {
            current->link = next;
            current = next;
        }
        printf("\nPress y for continue or press n : ");
        scanf("%c", &ch);
    } while (ch != 'n');
}
void disp()
{
    struct node *next;
    next = head;
    while (next != NULL)
    {
        printf("%d --->", next->info);
        next = next->link;
    }
    printf("\nThis is the end of linked list");
}
void main()
{
    create();
    disp();
}