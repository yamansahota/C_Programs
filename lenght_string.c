#include<stdio.h>
int main()
{
    char str[15];
    int i =0;
    printf("Enter Your First Name : ");
    scanf("%s",str);
    while(str[i]!='\0')
    i++;
    printf("The Lenght of the string : %d",i);
}