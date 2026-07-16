#include<stdio.h>
#include<conio.h>
int main()
{
    char str[50];
    int i,count=0;
    printf("Enter values upto 50");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        count=count+1;
    }
    printf("%d",count);
    return 0;
}
