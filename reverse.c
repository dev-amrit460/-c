#include<stdio.h>
int main()
{
    int a,b;
    printf("enter no to be reversed\t");
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        a=a/10;
        printf("%d",b);
    }
    
}