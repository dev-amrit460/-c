#include<stdio.h>
int fact(int x)
{
    int y=1,z=1;
    while(y<=x)
    {
    z=z*y;
    y++;        
    }
    return(z);
}
int main()
{
    int n,b;
    printf("enter number for factorial\n");
    scanf("%d",&n);
    b=fact(n);
    printf("factorial of %d is %d",n,b);
    return 0;
}