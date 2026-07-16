#include<stdio.h>
#include<conio.h>
void displayall();
int main()
{
    displayall();
    return 0;
}
void displayall()
{
    int x,y,i;
    printf("Enter small number and large number");
    scanf("%d%d",&x,&y);
    for(i=x;i<=y;i++)
    {
        printf("%d",i);
    }
    printf("\n");
}
