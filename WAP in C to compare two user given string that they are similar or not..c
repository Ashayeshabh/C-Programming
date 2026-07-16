#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50];
    int n;
    printf("Enter values upto 100");
    scanf("%s%s",str1,str2);
    n=strcmp(str1,str2);
    if(n==0)
    {
        printf("Both string are similar");
    }
    else
    {
        printf("Bot string are not similar");
    }
    return 0;
}
