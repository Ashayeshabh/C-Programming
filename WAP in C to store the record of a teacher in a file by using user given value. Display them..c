#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *ptr;
    char ch;
    char tid[30];
    char tname[50];
    int tsal;
    char course[50];
    scanf("%s%s%d%s",tid,tname,tsal,course);
    ptr=fopen("D:\\teacher.txt","w");
    fprintf(ptr,tid);
    fprintf(ptr,tname);
    fprintf(ptr,"%d",tsal);
    fprintf(ptr,course);
    fclose(ptr);
    ptr=fopen("D:\\teacher.txt","r");
    while((ch=fgetc(ptr))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(ptr);
    return 0;
}
