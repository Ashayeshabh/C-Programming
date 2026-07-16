#include<stdio.h>
#include<conio.h>
int displayall(int x,int y);
int main()
{
    int x,y;
    printf("Enter a number");
    scanf("%d%d",&x,&y);
    displayall(x,y);
    return 0;
}
int displayall(int m,int n)
{
    int i;
    for(i=m;i<=n;i++)
    {
        printf("%d",i);
    }
    return 0;
}
