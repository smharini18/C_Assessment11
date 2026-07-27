#include <stdio.h>
void strcmp1(char *str1,char *str2)
{
    while(*str1!='\0'&&*str2!='\0')
    {
        if(*str1!=*str2)
        {
            printf("Failure");
            return;
        }
        str1++;
        str2++;
    }
    if(*str1=='\0'&&*str2=='\0')
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
}
int main()
{
    char first[100],second[100];
    printf("Enter String 1: ");
    scanf("%s",first);
    printf("Enter String 2: ");
    scanf("%s",second);
    strcmp1(first,second);
    return 0;
}
