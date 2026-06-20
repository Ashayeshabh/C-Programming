#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    for(x=101;x<=302;x=x+1)
    {
        if(x%17!=0 && x%21!=0 && x%33!=0)
        {
            printf("%d",x);
        }
    }
    return 0;
}