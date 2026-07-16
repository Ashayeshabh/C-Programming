#include<stdio.h>
#include<conio.h>
struct employee
{
    char name[50];
    char address[100];
    int id;
    float salary;
}em;
int main()
{
    printf("Enter employee record");
    scanf("%d%s%s%s%f",em.name,em.address,&em.salary,&em.id);
    printf("%d%s%s%s%f",em.name,em.salary,em.address,em.id);
    return 0;
}