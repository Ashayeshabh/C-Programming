#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *ptr;
    char ch;
    int count=0;
    ptr=fopen("D:\\xyz\\abc.txt","w");
    fprintf(ptr,"%s","This is the file handling program in C \n");
    fprintf(ptr,"%s","This is the file handling program in C++");
    fclose(ptr);
    ptr=fopen("D:\\xyz\\abc.txt","r");
    while((ch=fgetc(ptr))!=EOF)
    {
        if(ch=='\n')
        {
            count++;
        }
    }
    printf("%d",count);
    fclose(ptr);
    return 0;
}
