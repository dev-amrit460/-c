#include<stdio.h>
void main()

{
int a,*p;
scanf("%d",&a);
p=&a;
printf("a is %d\n",a);
printf("&a is %d\n",&a);
printf("p is %d\n ",p);
printf("*p is %d\n",*p);
}