#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str1[20];
    printf("Enter values upto 20");
    scanf("%s",str1);
    strrev(str1);
    printf("%s",str1);
    return 0;
}

