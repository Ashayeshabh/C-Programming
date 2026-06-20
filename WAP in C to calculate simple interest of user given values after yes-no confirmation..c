#include<stdio.h>
#include<conio.h>
int main()
{
    int p,r,t,si;
    int x;
    char ch;
    x=1;
    while(x)
    {
        printf("Enter principle, rate and time values");
        scanf("%d%d%d",&p,&r,&t);
        si=(p*r*t)/100;
        printf("%d",si);
        printf("\nDo you want to continue (Y/y)");
        ch=getch();
        if(ch=='Y' || ch=='y')
        {
            x=1;
        }
        else
        {
            x=0;
        }
    }
  
    return 0;
}
