#include<stdio.h>
#include<conio.h>
struct student
{
    int rollno;
    char stuname[50];
    char fathername[50];
    char address[100];
    float fee;
}stu;
int main()
{
    printf("Enter student record");
    scanf("%d%s%s%s%f",&stu.rollno,stu.stuname,stu.fathername,stu.address,&stu.fee);
    printf("%d%s%s%s%f",stu.fathername,stu.address);
    return 0;
}