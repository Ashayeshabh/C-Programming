#include<stdio.h>
#include<conio.h>
int Factorial(int a);
int main()
{
    int a,k;
    printf("Enter a number");
    scanf("%d",&a);
    k=Factorial(a);
    printf("%d",k);
    return 0;
}
int Factorial(int a)
{
    int i,fact=1;
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    return fact;
}
