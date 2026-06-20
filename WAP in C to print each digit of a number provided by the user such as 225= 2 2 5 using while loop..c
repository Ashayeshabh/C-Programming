#include<stdio.h>
#include<conio.h>
int main()
{
    int i,k,p;
    printf("Enter a number");
    scanf("%d",&k);
    while(k>0)
    {
        p=k%10;
        printf("%d\n",p);
        k=k/10;
    }
    return 0;
}
