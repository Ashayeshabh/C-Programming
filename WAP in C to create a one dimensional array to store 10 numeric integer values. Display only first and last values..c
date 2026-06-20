#include<stdio.h>
#include<conio.h>
int main()
{
    int integer[10],i;
    printf("Enter 10 integer values");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&integer[i]);
    }
    {
        printf("%d",integer[0]);
        printf("%d",integer[9]);
    }
    return 0;
}
