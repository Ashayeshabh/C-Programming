#include<stdio.h>
#include<conio.h>
void displayall(int x,int y);
int main()
{
    int x,y;
    printf("Enter small number and large number");
    scanf("%d%d",&x,&y);
    displayall(x,y);
    return 0;
}
void displayall(int m,int n)
{
    int i;
    for(i=m;i<=n;i++)
    {
        printf("%d",i);
    }
}
