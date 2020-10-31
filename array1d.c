#include<stdio.h>
void main()
{
    int i,n,a[100];
    printf("enter no of value for array\t");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {scanf("%d",&a[i]);}
    printf("Entered Array is");
    for(i=0;i<n;i++)
    printf("\t%d",a[i]);
}