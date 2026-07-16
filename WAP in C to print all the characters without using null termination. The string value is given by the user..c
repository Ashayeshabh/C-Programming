#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[50];
    int i;
    int length=0;
    printf("Enter values upto 50");
    scanf("%s",str);
    length=strlen(str);
    for(i=0;i<length;i++)
    {
       printf("%c",str[i]);
    }
     return 0;
}
