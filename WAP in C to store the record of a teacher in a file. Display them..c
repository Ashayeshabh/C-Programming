#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *ptr;
    char ch;
    ptr=fopen("D:\\teacher.txt","w");
    fprintf(ptr,"Shakeb Sir \n");
    fprintf(ptr,"TEA0120 \n");
    fprintf(ptr,"70000 \n");
    fprintf(ptr,"BCA,BBA,MBA \n");
    fclose(ptr);
    ptr=fopen("D:\\teacher.txt","r");
    while((ch=fgetc(ptr))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(ptr);
    return 0;
}
