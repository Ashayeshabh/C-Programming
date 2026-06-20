#include<stdio.h>
#include<conio.h>
int main()
{
    int num[20],i;
    printf("Enter 20 interger values");
    for(i=0;i<=19;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<=19;i++)
    {
        if(num[i]%2==0)
        {
            printf("%d",num[i]);
        }
    }
    return 0;
}