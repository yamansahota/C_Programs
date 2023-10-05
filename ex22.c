#include <stdio.h>
#include <conio.h>
void main()
{
    int i;
    for(i=1;i<=3;i++)
    {
        printf("\n%d",i);
        if(i==2)
        continue;
        printf("\nBottom of loop");
    }
    printf("\nOut of loop");
      getch();
}
  
