#include <stdio.h>
void memcpy(int *source,int *destination,int count)
{
    int index;
    for(index=0;index<count;index++)
    {
        *destination=*source;
        source++;
        destination++;
    }
}
int main()
{
    int source[5]={10,20,30,40,50};
    int destination[5];
    int index;
    memcpy(source,destination,5);
    printf("Copied Elements:\n");
    for(index=0;index<5;index++)
    {
        printf("%d ",destination[index]);
    }
    return 0;
}
