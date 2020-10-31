#include<stdio.h>
void main()
{
    int n,i,m=0;
    printf("enter any number\n");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("number is not prime");
            m=1;
            break;
        }
    }
    if(m==0)
    printf("number is prime");
}