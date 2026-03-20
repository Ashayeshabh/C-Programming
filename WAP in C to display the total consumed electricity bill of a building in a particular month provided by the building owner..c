#include <stdio.h>
#include <conio.h>
int main()
{
    int x,y;
    printf("Enter a Consumed Unit");
    scanf("%d",&x);
    if(x>=1 && x<=100)
    {
        y=x*4.70;
        printf("%d",y);
    }
    else
    {
        if(x>=101 && x<=300)
        {
            y=x*5.20;
            printf("%d",y);
        }
        else
        {
            if(x>=301 && x<=500)
            {
                y=x*7.10;
                printf("%d",y);
            }
            else
            {
                if(x>=501 && x<=700)
                {
                    y=x*9.20;
                    printf("%d",y);
                }
                else
                {
                    y=x*10.40;
                    printf("%d",y);
                }
            }
        }
    }
    return 0;
}    