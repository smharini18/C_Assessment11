#include <stdio.h>
void strcpy1(char *source,char *destination)
{
    while(*source!='\0')
    {
        *destination=*source;
        source++;
        destination++;
    }
    *destination='\0';
}

int main()
{
    char str1[100],str2[100];
    printf("Enter Source String: ");
    scanf("%s",str1);
    strcpy1(str1,str2);
    printf("Copied String: %s",str2);
    return 0;
}
