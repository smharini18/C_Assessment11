#include <stdio.h>
int main()
{
    int num;
    int *ptr;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Original value : %d\n",num);
    ptr=&num;
    *ptr=*ptr+10;
    printf("Modified value : %d\n",num);
    return 0;
}
