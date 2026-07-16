#include<stdio.h>
#include<conio.h>
int Factorial();
int main()
{
    int k;
    k=Factorial();
    printf("%d",k);
    return 0;
}
int Factorial()
{
    int a,i,fact=1;
    printf("Enter a number");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    return fact;
}
