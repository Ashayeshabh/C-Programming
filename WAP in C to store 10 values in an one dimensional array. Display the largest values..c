#include<stdio.h>
#include<conio.h>
int main()
{
    int x[10],i,k;
    printf("Enter a number");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<=9;i++)
    {
        if(x[i]>k)
        {
            k=x[i];
        }
    }
    printf("%d",k);
    return 0;
}