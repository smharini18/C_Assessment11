#include <stdio.h>
void increment(int *ptr,int size)
{
    int index;
    for(index=0;index<size;index++)
    {
        *ptr=*ptr+1;
        ptr++;
    }
}
int main()
{
    int arr[10];
    int size,index;
    printf("Enter size: ");
    scanf("%d",&size);
    printf("Enter elements: ");
    for(index=0;index<size;index++)
    {
        scanf("%d",&arr[index]);
    }
    increment(arr,size);
    printf("After increment: ");
    for(index=0;index<size;index++)
    {
        printf("%d",arr[index]);
    }
    return 0;
}
