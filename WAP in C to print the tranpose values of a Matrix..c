#include<stdio.h>
#include<conio.h>
int main()
{
    int x[3][3],y[3][3],i,j;
    printf("Enter 9 integer values");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            y[i][j]=x[i][j];
        }
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d",y[i][j]);
        }
    }
    return 0;
}