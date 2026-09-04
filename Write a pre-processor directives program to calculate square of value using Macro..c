#include<stdio.h>
#define SQR(y) (y*y)
int main()
{
    int num,result;
    printf("Enter a value");
    scanf("%d",&num);
    result=SQR(num);
    printf("%d",result);
    return 0;
}
