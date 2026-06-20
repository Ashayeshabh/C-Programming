#include<stdio.h>
#include<conio.h>
int main()
{
    int num[25],i;
    printf("Enter 25 integer values");
    for(i=0;i<=24;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<=4;i++)
    {
        printf("%d",num[i]);
    }
    for(i=20;i<=24;i++)
    {
        printf("%d",num[i]);
    }
    return 0;
}
