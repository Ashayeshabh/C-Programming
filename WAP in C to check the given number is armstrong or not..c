#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,sum=0;
    printf("Enter a number");
    scanf("%d",&b);
    c=b;
    while(b>0)
    {
        a=b%10;
        sum=sum+(a*a*a);
        b=b/10;
    }
    if(sum==c)
    {
        printf("Number is Armstrong");
    }
    else
    {
        printf("Number is not Armstrong");
    }
    return 0;
}