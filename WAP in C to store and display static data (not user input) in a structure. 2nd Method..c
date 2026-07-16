#include<stdio.h>
#include<conio.h>
struct student
{
    int rollno;
    char sname[50];
    float fee;
}x={101,"Mohan",45000.00};
int main()
{
    printf("%d%s%f",x.rollno,x.sname,x.fee);
    return 0;
}