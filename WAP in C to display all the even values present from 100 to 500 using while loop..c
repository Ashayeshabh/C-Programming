#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    i=100;
    while(i<=500)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
            i=i+2;
        }
    }
    return 0;
}
