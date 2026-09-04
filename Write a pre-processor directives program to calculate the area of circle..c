#include<stdio.h>
#define PI 3.14159
int main()
{
    float r,area;
    printf("Enter radius value");
    scanf("%f",&r);
    area=PI*r*r;
    printf("%f",area);
    return 0;
}
