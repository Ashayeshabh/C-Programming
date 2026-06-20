#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y;
    printf("Enter a number");
    scanf("%d",&x);
    for(y=1;y<=x;y++)
    {
        if(x%y==0)
        {
            printf("%d",y);
        }
    }
    return 0;
}