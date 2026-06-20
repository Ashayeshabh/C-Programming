#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int n;
    char str1[200];
    printf("Enter characters upto 200");
    scanf("%s",str1);
    n=strlen(str1);
    printf("%d",n);
    return 0;
}