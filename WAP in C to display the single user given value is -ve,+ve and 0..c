#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if (a>0)
    {
        printf("Number is +ve");
    }
    if (a<0)
    {
        printf("Number is -ve");
    }
    if (a==0)
    {
        printf("Value is Zero");
    }
    return 0;
}