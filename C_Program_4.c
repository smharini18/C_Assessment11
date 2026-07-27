#include <stdio.h>
void find_2digit_odd_sum7()
{
    int num,last,first,sum;
    int *ptr=&num;
    *ptr=10;
    while(*ptr<100)
    {
        if(*ptr%2==1)
        {
            last=*ptr%10;
            first=(*ptr/10)%10;
            sum=last+first;
            if(sum==7)
            {
                printf("%d\n",*ptr);
            }
        }
        *ptr=*ptr+1;
    }
}
int main()
{
    find_2digit_odd_sum7();
    return 0;
}
