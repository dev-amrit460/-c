#include<stdio.h>
void main()
{
    int c=0,n,a,b=1;
    printf("enter number n for fabonacci\n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        printf("\t%d",c);
        a=b;
        b=c;
        c=a+b;
    }

}