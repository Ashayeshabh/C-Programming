#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    int *x,*y,*z;
    a=10;
    b=15;
    c=a+b;
    x=&a;
    y=&b;
    z=&c;
    printf("%d",*(&c));
    return 0;
}