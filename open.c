#include<stdio.h>
int main()
{int a,b,c;
printf("enter 3 numbers\n");
scanf("%d%d%d",&a,&b,&c);
{if(a+b+c>=100&&a+b+c<=200)
{
    printf("in range");
}
else
{
    printf("outside range");
}
}
}