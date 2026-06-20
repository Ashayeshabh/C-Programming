#include<stdio.h>
#include<conio.h>
int main()
{
    int x[20],i;
    printf("Enter a number");
    for(i=0;i<=19;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<=19;i++)
    {
        if(x[i]%2==0)
        {
            printf("%d",x[i]);
        }
    }
    return 0;
}