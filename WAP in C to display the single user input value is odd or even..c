#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if (x%2==0)
    {
        printf("Nuberm is Even");
    }
    else
    {
        printf("Nuberm is Odd");
    }
    return 0;
}