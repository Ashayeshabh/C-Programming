#include<stdio.h>
#define MAX(p,q) ((p>q)?(p):(q))
int main()
{
    int num1,num2,result;
    printf("Enter 1st and 2nd value");
    scanf("%d%d",&num1,&num2);
    result=MAX(num1,num2);
    printf("%d",result);
    return 0;
}
