#include<stdio.h>
#include<conio.h>
struct teacher
{
    char thname[50];
    char thaddress[100];
    char thsubject[10];
    int thdepartmentno;
}y[10];
int main()
{
    int i;
    printf("Enter teacher record");
    for(i=0;i<=9;i++)
    {
        scanf("%s%s%s%d",y[i].thname,y[i].thaddress,y[i].thsubject,&y[i].thdepartmentno);
    }
    for(i=0;i<=9;i++)
    {
        printf("%s%s%s%d",y[i].thname,y[i].thaddress,y[i].thsubject,y[i].thdepartmentno);
    }
    return 0;
}