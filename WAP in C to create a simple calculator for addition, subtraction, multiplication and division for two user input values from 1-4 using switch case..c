#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    int b,c,e;
    printf("Enter your choice from 1-4");
    scanf("%d",&a);
    printf("Enter two numbers");
    scanf("%d%d",&b,&c);
    switch(a)
    {
       case 1:
              e=b+c;
              printf("%d",e);
              break;
       case 2:
              e=b-c;
              printf("%d",e);
              break;
       case 3:
              e=b*c;
              printf("%d",e);
              break;
       case 4:
              e=a/b;
              printf("%d",e);
              break;
       default:
             printf("Invalid Choice");
             break;         
    }
    
    return 0;
}
