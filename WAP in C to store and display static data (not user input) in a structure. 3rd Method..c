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
    x.rollno=101;
    strcpy(x.sname,"Mohan");
    x.fee=45000.000;
    printf("%d%s%f",x.rollno,x.sname,x.fee);
    return 0;
}