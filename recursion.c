// Using Global Variable Recursion 
#include <stdio.h>
int x = 1;
void disp()
{
    if (x <= 5)
    {
        printf("%d\n", x);
        x++;
        disp();
        disp();
    }
    printf("Hello\n");
    printf("Bye\n");
}
void main()
{
    disp();
}

//Using Local Variable Recursion Program :
 
// void disp(int x)
// {
//     if (x <= 5)
//     {
//         printf("%d\n", x);
//         x++;
//         disp(x);
//         disp(x+1);
//     }
//     printf("Hello\n");
//     printf("Bye\n");
// }
// void main()
// {
//     disp(1);
// }