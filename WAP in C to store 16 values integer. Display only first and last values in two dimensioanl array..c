#include<stdio.h>
#include<conio.h>
int main()
{
    int x[4][4],i,j;
    printf("Enter 16 integer values");
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    {
        printf("%d",x[0][0]);
        printf("%d",x[3][3]);
    }
    
    return 0;
}