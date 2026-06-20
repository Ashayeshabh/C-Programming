#include<stdio.h>
#include<conio.h>
int main()
{
    int num[20],i;
    printf("Enter 20 integer values");
    for(i=0;i<=19;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=19;i>=0;i--)
    {
        printf("%d",num[i]);
    }
    return 0;
}
