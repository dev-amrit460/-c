#include<stdio.h>
void main()
{
    int a[6]={1,2,3,4,5,6},i,sum=0;
    for(i=0;i<6;i++)
    {
        sum=sum+a[i];
    }
    printf("sum is %d",sum);
}