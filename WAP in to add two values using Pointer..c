#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    int *p1,*p2,*p3;
    a=10;
    b=5;
    c=a+b;
    p1=&a;
    p2=&b;
    p3=&c;
    *p3=*p1+*p2;
    printf("%d",*p3);
    return 0;
}