#include <stdio.h>
int main()
{
    float b, h, area;
    printf("Enter The breadth : ",&b);
    scanf("%f",&b);
    printf("Enter The Lenght : ",&h);
    scanf("%f",&h);
    area = (b * h) / 2;

    printf("\n\n Area of Triangle is: %f", area);
    return (0);
}