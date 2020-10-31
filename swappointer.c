#include<stdio.h>
void main()
{
    int a=5,b=10,*p,*q,temp;
    p=&a;q=&b;
    printf("before swap %d %d\n",a,b);
    temp=*p;
    *p=*q;
    *q=temp;
    printf("after swap %d %d",a,b);
}