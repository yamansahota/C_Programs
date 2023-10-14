#include <stdio.h>
#include <stdlib.h>
struct student
{
    int roll;
    int age;
    struct student *p;
};
void main()
{
    struct student s,*s1;
    s1=(struct student *)malloc(sizeof(struct student));
    s1->roll=12;
    s1->p=&s;
    (s1->p)->roll=120;
    printf("%d",s.roll);
}