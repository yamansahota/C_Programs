#include <stdio.h>
int i = -1;
int j = -1;
int arr[5];
int size = 5;
void insertion()
{
    int num;
    if (i == size - 1)
    {
        printf("Queue Overflow.\n");
    }
    else
    {
        if (j == -1)

            j = 0;
        printf("Enter Value in Queue : ");
        scanf("%d", &num);
        i++;
        arr[i] = num;
    }
}
void deletion()
{
    if (j == -1 || j > i)
    {
        printf("Queue Is Empty.\n");
    }
    else
    {
        printf("Deleted Element : %d\n", arr[j]);
        j++;
    }
}
void show()
{
    int a;
    if (j == -1)
    {
        printf("Queue Is Empty.");
    }
    else
    {
        for (a = j; a <= i; a++)
        {
            printf("Element In Queue : %d\n", arr[a]);
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
            insertion();
            break;
        case 2:
            deletion();
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