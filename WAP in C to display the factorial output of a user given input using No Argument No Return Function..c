#include<stdio.h>
#include<conio.h>
void Factorial();
int main()
{
    Factorial();
    return 0;
}
void Factorial()
{
    int a,i,fact=1;
    printf("Enter a number");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
}
