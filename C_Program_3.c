#include <stdio.h>
void arrange_ascend()
{
    int num;
    int *ptr;
    ptr=&num;
    for(*ptr=1;*ptr<=5;*ptr=*ptr+1)
    {
        printf("%d\n",*ptr);
    }
}
int main()
{
    arrange_ascend();
    return 0;
}
