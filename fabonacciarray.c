#include<stdio.h>
void main()
{
    int n,a[100];
    printf("enter number for fabonacci series\n");
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    printf("\t%d\t%d",a[0],a[1]);
    for( int i=2;i<n;i++)
    {
        a[i]=a[i-1]+a[i-2];
        printf("\t%d",a[i]);
    }
}