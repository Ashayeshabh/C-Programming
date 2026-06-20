#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    a=0;
    b=1;
    c=1;
    printf("%d%d",a,b);
    while(c<=100)
    {
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
    }
    return 0;
}