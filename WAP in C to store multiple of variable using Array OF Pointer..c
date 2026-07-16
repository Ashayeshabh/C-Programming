#include<stdio.h>
#include<conio.h>
int main()
{
    char a,b,c,d,e;;
    char *x[50];
    int i;
    a=100;
    b=15;
    c=20;
    d=25;
    e=30;
    x[0]=&a;
    x[1]=&b;
    x[2]=&c;
    x[3]=&d;
    x[4]=&e;
    for(i=0;i<=4;i++)
    {
        printf("%d",*x[i]);
    }
    return 0;
}