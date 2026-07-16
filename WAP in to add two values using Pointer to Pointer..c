#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    int *p1,*p2,*p3;
    int **x,**y,**z;
    int ***m,***n,***k;
    a=10;
    b=15;
    c=a+b;
    p1=&a;
    p2=&b;
    p3=&c;
    x=&p1;
    y=&p2;
    z=&p3;
    m=&x;
    n=&y;
    k=&z;
    printf("%d",*p3);
    return 0;
}