#include<stdio.h>
int main()
{
    int a,factorial=1;
    scanf("%d",&a);
    while(a>=1)
    {
        factorial=a*factorial;
        a--;
    }
    printf("factirial is %d",factorial);
}