#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
    int rollno;
    char sname[50];
    float fee;
}x;
int main()
{
    printf("%d",sizeof(x));
    printf("%d",sizeof(x.rollno));
    printf("%s",sizeof(x.sname));
    printf("%f",sizeof(x.fee));
    return 0;
}