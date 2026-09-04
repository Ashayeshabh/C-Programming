#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("D:\\studnt.txt","w");
    if(ptr=NULL)
    {
        printf("File is not created");
    }
    printf("New blank file created");
    fclose(ptr);
    return 0;
}
