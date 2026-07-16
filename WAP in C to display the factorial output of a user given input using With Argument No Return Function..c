#include<stdio.h>
#include<conio.h>
void Factorial(int a);
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    Factorial(a);
    return 0;
}
void Factorial(int a)
{
    int i,fact=1;
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
}
