#include <stdio.h>
#include <stdlib.h>
struct student
{
    int roll;
    int age;
};
void main()
{
    struct student s, *ptr;
    ptr = &s;
    ptr->age=10;
    ptr->roll=45;
    printf("%d", s.roll);
    printf("%d", s.age);
}