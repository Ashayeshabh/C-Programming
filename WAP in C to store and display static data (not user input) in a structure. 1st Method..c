#include<stdio.h>
#include<conio.h>
struct student
{
    int rollno;
    char sname[50];
    float fee;
}x;
int main()
{
    struct student x={101,"Mohan",45000.00};
    printf("%d%s%f",x.rollno,x.sname,x.fee);
    return 0;
}