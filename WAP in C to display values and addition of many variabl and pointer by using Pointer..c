#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    int *ptr;
    num=100;
    ptr=&num;
    printf("%u",&num);
    printf("%d",&num);
    printf("%u",ptr);
    printf("%d",ptr);
    printf("%u",&ptr);
    printf("%d",&ptr);
    return 0;
}