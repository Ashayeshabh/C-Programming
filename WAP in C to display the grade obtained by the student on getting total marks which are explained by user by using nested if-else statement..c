#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter Total Marks");;
    scanf("%d",&a);
    if(a>=700)
    {
        printf("Super+");
    }
    else
    {
        if(a>=600 && a<=699)
        {
            printf("A++");
        }
        else
        {
            if(a>=500 && a<=599)
            {
                printf("A");
            }
            else
            {
                if(a>=400 && a<=499)
                {
                    printf("B");
                }
                else
                {
                    if(a>=300 && a<=399)
                    {
                        printf("C");
                    }
                    else
                    {
                        if(a<=300)
                        {
                            printf("Fail");
                        }
                    }
                }
            }
        }
    }
    return 0;
}
