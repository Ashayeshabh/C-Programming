#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("D:\\studnt.txt","w");
    fprintf(ptr,"Welcome IIBM");
    fclose(ptr);
    return 0;
}
