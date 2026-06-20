#include<stdio.h>
#include<conio.h>
int main()
{
    int x[4][4],i,j,count=0;
    printf("Enter 16 integer values");
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            if(x[i][j]%2!=0)
            {
                printf("%d",x[i][j]);
                count=count+1;
            }
        }
    }
    printf("%d",count);
    return 0;
}