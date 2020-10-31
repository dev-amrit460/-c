#include<stdio.h>
void main()
{
    int a[5]={1,2,3,4,5};
    printf("%d\t%d\t%d\n",a,a+1,a+3);
    printf("%d\t%d\t%d",*a,*(a+1),*(a+3));
}