#include<stdio.h>
#include<conio.h>
int main()
{
    int x,i,sum=0;
    printf("Enter a number");
    scanf("%d",&x);
    for(i=1;i<x;i++)
    {
        if(x%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==x && x>0)
    {
        printf("Perfect Number");
    }
    else
    {
        printf("Not Perfect Number");
    }
    return 0;
}