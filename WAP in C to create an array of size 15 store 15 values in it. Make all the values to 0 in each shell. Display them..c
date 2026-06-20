#include<stdio.h>
#include<conio.h>
int main()
{
    int y[15],i;
    printf("Enter a number");
    for(i=0;i<=14;i++)
    {
        scanf("%d",&y[i]);
    }
    for(i=0;i<=14;i++)
    {
        y[i]=0;
    }
    for(i=0;i<=14;i++)
    {
        printf("%d",y[i]);
    }
    return 0;
}