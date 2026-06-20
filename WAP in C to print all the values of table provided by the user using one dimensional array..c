#include<stdio.h>
#include<conio.h>
int main()
{
    int x[10],n,i;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=0;i<=9;i++)
    {
        x[i]=n*(i+1);
    }
    for(i=0;i<=9;i++)
    {
        printf("%d",x[i]);
    }
    return 0;
}