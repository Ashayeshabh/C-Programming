#include<stdio.h>
#include<conio.h>
int main()
{
    int i,k,sum=0;
    printf("Enter a number");
    scanf("%d",&i);
    while(i!=0)
    {
        k=i%10;
        sum=sum+k;
        i=i/10;
        printf("%d\n",sum);
    }
    if(sum%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    return 0;
}