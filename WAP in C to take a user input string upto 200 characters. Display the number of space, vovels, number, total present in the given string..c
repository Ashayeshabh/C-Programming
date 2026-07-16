#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[200];
    int i;
    int n;
    int space=0,total=0,vowels=0,number=0;
    printf("Enter values upto 200");
    scanf("%s",str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        if(str[i]==' ')
        {
            space++;
        }
        else if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
        {
            total++;
        }
        else if(str[i]=='a'  || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' && str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            vowels++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            number++;
        }
    }
        printf("\n");
        printf("%d\n",vowels);
        printf("%d\n",space);
        printf("%d\n",number);
        printf("%d\n",total);
    return 0;
}
