#include <stdio.h>
void intcon(int *arr1,int count1,int *arr2,int count2,int *result)
{
    int index;
    for(index=0;index<count1;index++)
    {
        *result=*(arr1+index);
        result++;
    }
    for(index=0;index<count2;index++)
    {
        *result=*(arr2+index);
        result++;
    }
}
int main()
{
    int first[5],second[5],finalArr[10];
    int index;
    printf("Enter Array 1: ");
    for(index=0;index<5;index++)
    {
        scanf("%d",&first[index]);
    }
    printf("Enter Array 2: ");
    for(index=0;index<5;index++)
    {
        scanf("%d",&second[index]);
    }
    intcon(first,5,second,5,finalArr);
    printf("Concatenated Array: ");
    for(index=0;index<10;index++)
    {
        printf("%d ",finalArr[index]);
    }
    return 0;
}
