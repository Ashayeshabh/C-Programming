#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *ptr;
    char ch;
    int count=0;
    ptr=fopen("D:\\student.txt","w");
    fprintf(ptr,"Welcome India");
    fclose(ptr);
    ptr=fopen("D:\\student.txt","r");
    while((ch=fgetc(ptr))!=EOF)
    {
        count=count+1;
    }
    printf("%d",count);
    fclose(ptr);
    return 0;
}
