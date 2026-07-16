#include<stdio.h>
#include<conio.h>
struct student
{
    int rollno;
    char name[50];
    float fee;
}x;
int main()
{
    struct student *ptr;
    ptr=&x;
    printf("Enter student record");
    scanf("%d%s%f",&ptr->rollno,ptr->name,&ptr->fee);
    printf("%d%s%f",ptr->rollno,ptr->name,ptr->fee);
    return 0;
}