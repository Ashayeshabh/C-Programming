#include<stdio.h>
#include<conio.h>
int main()
{
    int x[10],y[10],i;
    printf("Enter 10 interger values");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<=9;i++)
    {
        y[i]=x[9-i];
    }
    for(i=0;i<=9;i++)
    {
        printf("%d",y[i]);
    }
    return 0;
}