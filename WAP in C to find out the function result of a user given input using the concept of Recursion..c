#include<stdio.h>
#include<conio.h>
int fact(int n);
int main()
{
    int n,k;
    printf("Enter a number");
    scanf("%d",&n);
    k=fact(n);
    printf("%d",k);
    return 0;
}
int fact(int m)
{
    if(m>=1)
    {
        return m*fact(m-1);
    }
    else
        return 1;
}