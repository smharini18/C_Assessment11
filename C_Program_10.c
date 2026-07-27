#include <stdio.h>
void strcon(char *str1,char *str2,char *result)
{
    while(*str1!='\0')
    {
        *result=*str1;
        str1++;
        result++;
    }
    while(*str2!='\0')
    {
        *result=*str2;
        str2++;
        result++;
    }
    *result='\0';
}
int main()
{
    char first[100],second[100],finalStr[200];
    printf("Enter String 1: ");
    scanf("%s",first);
    printf("Enter String 2: ");
    scanf("%s",second);
    strcon(first,second,finalStr);
    printf("Result: %s",finalStr);
    return 0;
}
