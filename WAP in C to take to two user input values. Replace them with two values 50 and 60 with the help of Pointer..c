#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    int *p,*q;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    *p=50;
    *q=60;
    printf("%d%d",*p,*q);
    return 0;
}