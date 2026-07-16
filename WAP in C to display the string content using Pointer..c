#include<stdio.h>
#include<conio.h>
int main()
{
    char str[50];
    char *ptr;
    gets(str);
    ptr=str;
    while(*ptr!='\0');
    {
        printf("%c",*ptr);
        *ptr++;
    }
    return 0;
}