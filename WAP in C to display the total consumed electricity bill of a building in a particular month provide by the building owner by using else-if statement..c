#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter Consumed Unit");;
    scanf("%d",&a);
    if(a>=1 && a<=100)
    {
        b=a*4.70;
        printf("%d",b);
    }
    else if(a>=101 && a<=300)
    {
        b=a*5.20;
        printf("%d",b);
    }
    else if(a>=301 && a<=500)
    {
        b=a*7.10;
        printf("%d",b);
    }
    else if(a<=501 && a<=700)
    {
        b=a*9.20;
        printf("%d",b);
    }
    else
    {
        b=a*10.40;
        printf("%d",b);
    }
    return 0;
}
