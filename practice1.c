#include<stdio.h>
int prime(int a)
{
    int i,m=0;
    scanf("%d",&a);
    for(i=2;i<a;i++)
    if(a%i==0)
    {
        m=1;
        printf("not prime");
    }
    if(m==0)
    {
        printf("prime");
    }
    return 0;
}
void main()
{
    int s,y;
    y=prime(s);
}