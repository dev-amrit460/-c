#include<stdio.h>
int fact(int a)
{
    if(a<=1)
    return 1;
    else
    return a*fact(a-1);
}
void main()
{   int a,y;
    scanf("%d",&a);
    y=fact(a);
    printf("factorial of %d is %d",a,y);
}