#include <stdio.h>
void memcomp(int *source,int *destination,int count)
{
    int index;
    for(index=0;index<count;index++)
    {
        if(*(source+index)!=*(destination+index))
        {
            printf("Failure");
            return;
        }
    }
    printf("Success");
}
int main()
{
    int arr1[5],arr2[5],index;
    printf("Enter Array 1: ");
    for(index=0;index<5;index++)
    {
        scanf("%d",&arr1[index]);
    }
    printf("Enter Array 2: ");
    for(index=0;index<5;index++)
    {
        scanf("%d",&arr2[index]);
    }
    memcomp(arr1,arr2,5);
    return 0;
}
