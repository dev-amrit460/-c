#include<stdio.h>
int main()
{
    int a,l,s;
scanf("%d",&a);
l=a%10;
while(a!=0)
{
s=a%10;
a=a/10;
}
printf("%d%d",s,l);
return 0;
}