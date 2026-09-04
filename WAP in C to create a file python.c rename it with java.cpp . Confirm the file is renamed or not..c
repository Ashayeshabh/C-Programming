#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *ptr;
    char ch;
    ptr=fopen("D:\\xyz\\python.c","w");
    rename("java.cpp","python.c");
    fclose(ptr);
    ptr=fopen("D:\\xyz\\python.c","r");
    if(ch==NULL)
    {
        printf("File is renamed");
    }
    else
    {
        printf("File is not renamed");
    }
    fclose(ptr);
    return 0;
}
