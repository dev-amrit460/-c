#include<stdio.h>
#include<math.h>
void main()
{
    int n,a=0,b,sum=0,z,x;
    printf("enter number for checking of armstrong number\n");
    scanf("%d",&n);
    z=n;
    x=n;
    while(n!=0)
    {
        a=a+1;
        n=n/10;
    }
    printf("power is %d\n",a);
    while(z!=0)
    {
        b=z%10;
        sum=sum+pow(b,a);
        z=z/10;
        
    }
    printf("sum is %d\n",sum);
    if(sum==x)
    printf("it is an armstrong number");
    else
    printf("it is not an armstrong number");
}