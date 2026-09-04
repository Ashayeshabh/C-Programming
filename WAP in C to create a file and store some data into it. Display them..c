#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *ptr;
    char ch;
    ptr=fopen("D:\\studnt.txt","w");
    fprintf(ptr,"Welcome IIBM");
    fclose(ptr);
    ptr=fopen("D:\\studnt.txt","r");
    while((ch=fgetc(ptr))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(ptr);
    return 0;
}
