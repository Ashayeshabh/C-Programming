#include<stdio.h>
#include<conio.h>
int main()
{
    int i,p;
    printf("Enter a number");
    scanf("%d",&i);
    do
    {
        p=i%10;
        printf("%d\n",p);
        i=i/10;
    }while(i>0);
    return 0;
}
