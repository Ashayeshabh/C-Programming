#include<stdio.h>
#include<conio.h>
void CBV(int,int);
int main()
{
    int x,y;
    x=100;
    y=200;
    printf("%d%d",x,y);
    CBV(x,y);
    return 0;
}
void CBV(int m,int n)
{
    printf("%d%d",m,n);
    m=1000;
    n=2000;
    printf("%d%d",m,n);
}
