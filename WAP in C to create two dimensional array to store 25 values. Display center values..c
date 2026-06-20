#include<stdio.h>
#include<conio.h>
int main()
{
    int x[5][5],i,j;
    printf("Enter 25 integer values");
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=4;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=4;j++)
        {
            if(i==2 && j==2)
            {
                printf("%d",x[i][j]);
            }
        }
    }
    printf("\n");
    return 0;
}