#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter Number");
    scanf("%d",&a);
    if(a>0)
    {
        printf("Number is +ve");
    }
    if(a<0)
    {
        printf("Number is -ve");
    }
    if(a==0)
    {
        printf("Number is Zero");
    }
    return 0;
}
