#include<stdio.h>
#include<conio.h>
int main()
{
    int x[10],count=0,i;
    printf("Enter a number");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<=9;i++)
    {
        if(x[i]%2==0)
        {
            printf("%d",x[i]);
            count=count+1;
        }
    }
    printf("%d",count);
    return 0;
}