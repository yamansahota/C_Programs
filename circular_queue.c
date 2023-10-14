#include <stdio.h>
int i = -1;
int j = -1;
int arr[5];
int size = 5;
void insertion()
{
    int num;
    printf("Enter Number to be inserted : ");
    scanf("%d", &num);
    if (i == 0 && j == size - 1 || (i == j + 1))
    {
        printf("Overflow\n");
    }
    else if (i == -1 && j == -1)
    {
        i = j = 0;
        arr[j] = num;
    }
    else if (j == size - 1 && i != 0)
    {
        j = 0;
        arr[j] = num;
    }
    else
    {
        j++;
        arr[j] = num;
    }
}
int deletion()
{
    int val;
    if (i == -1 && j == -1)
    {
        printf("Queue is Empty !\n");
        return -1;
    }
    val = arr[i];
    if (i == j)
        i = j = -1;
    else
    {
        if (i == size - 1)
            i = 0;
        else
            i++;
    }
    return val;
}
void show()
{
    int a;
    printf("\n");
    if (j == -1 && i == -1)
    {
        printf("Queue Is Empty.\n");
    }
    else
    {
        if (i < j)
            for (a = i; a <= j; a++)
            {
                printf("Element In Queue : \t %d\n", arr[a]);
            }
        else
        {
            for (a = i; a < size; a++)
                printf("\t %d", arr[a]);
            for (a = 0; a < j; a++)
                printf("\t %d", arr[i]);
        }
    }
}
int peek()
{
    if (i == -1 && j == -1)
    {
        printf("Queue is Empty.\n");
        return -1;
    }
    else
    {
        return arr[i];
    }
}
void main()
{
    int hel;
    int val;
    while (1)
    {
        printf("Enter 1 for Insertion :\n");
        printf("Enter 2 for Deletion :\n");
        printf("Enter 3 for Peek:\n");
        printf("Enter 4 for Display :\n");
        printf("Enter 5 for Exit :\n");
        scanf("%d", &hel);
        switch (hel)
        {
        case 1:
            insertion();
            break;
        case 2:
            val = deletion();
            if (val != -1)
            {
                printf("\n The number is deleted : %d \n", val);
            }
            break;
        case 3:
            val = peek();
            if (val != -1)
            {
                printf("\n The first value in queue is : %d\n", val);
            }
            break;
        case 4:
            show();
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid Input Entered.");
            break;
        }
    }
}