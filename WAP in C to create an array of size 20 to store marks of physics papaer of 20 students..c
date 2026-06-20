#include<stdio.h>
#include<conio.h>
int main()
{
    int marks[20],i;
    printf("Enter marks of physics of 20 student");
    for(i=0;i<=19;i++)
    {
        scanf("%d",&marks[i]);
    }
    for(i=0;i<20;i++)
    {
        printf("%d",marks[i]);
    }
    return 0;
}