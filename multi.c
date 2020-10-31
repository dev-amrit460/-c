#include<stdio.h>
void main()
{
    int i,r,n,multi=1;
    scanf("%d",&n);
    for(i=1;n!=0;i++)   
     {
        r=n%10;
        multi=multi*r;
        n=n/10;
    }
    printf("\nmultiply of digits are %d",multi);
}