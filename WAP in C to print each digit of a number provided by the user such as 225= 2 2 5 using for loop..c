#include<stdio.h>
#include<conio.h>
int main()
{
    int i,k,p;
    printf("Enter a number");
    scanf("%d",&i);
    for(;i>0;i=i/10)
    {
        p=i%10;
        printf("%d\n",p);
    }
    return 0;
}
