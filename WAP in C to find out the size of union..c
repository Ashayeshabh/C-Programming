#include<stdio.h>
#include<conio.h>
union student
{
    int rollno;
    char sname[50];
    float fee;
}x;
int main()
{
    printf("%d",sizeof(x));
    return 0;
}