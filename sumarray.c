#include<stdio.h>
void main()
{
    int a[5],i,sum=0;
    for(i=0;i<=5;i++)
    {
        printf("Enter %d element\n",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<=5;i++)
    {
        sum=sum+a[i];
    }
    printf("sum is %d",sum);
}