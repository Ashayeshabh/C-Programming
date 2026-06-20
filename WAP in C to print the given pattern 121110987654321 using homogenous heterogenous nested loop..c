#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k=12;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=4;j++)
        {
            printf("%d",k);
            k--;
        }
        {
            printf("\n");
        }
    }
    
    return 0;
}