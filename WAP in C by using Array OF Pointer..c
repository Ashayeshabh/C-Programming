#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,e,f,g,h;
    int *x[8];
    x[0]=&a;
    x[1]=&b;
    x[2]=&c;
    x[3]=&d;
    x[4]=&e;
    x[5]=&f;
    x[6]=&g;
    x[7]=&h;
    printf("%d",*x[0]);
    return 0;
}