#include<stdio.h>
#include<conio.h>
int main()
{
    int x[5][5],y[5][5],z[5][5],i,j;
    printf("Enter 50 integer values");
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=4;j++)
        {
            scanf("%d%d",&x[i][j],&y[i][j]);
        }
    }
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=4;j++)
        {
            z[i][j]=x[i][j]+y[i][j];
        }
    }
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=4;j++)
        {
            printf("%d",z[i][j]);
        }
    }
    return 0;
}