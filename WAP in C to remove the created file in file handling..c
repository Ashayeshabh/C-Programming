#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("D:\\xyz\\python.c","w");
    fclose(ptr);
    remove("python.c");
    ptr=fopen("D:\\xyz\\python.c","r");
    if(ptr==NULL)
    {
        printf("File is removed");
    }
    else
    {
        printf("File is not removed");
    }
    fclose(ptr);
    return 0;
}
