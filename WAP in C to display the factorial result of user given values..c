#include<stdio.h>
#include<conio.h>
int main()
{
    int x,i,num=1;
    printf("Enter a number");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        num=num*i;
    }
    printf("%d",num);
    return 0;
}