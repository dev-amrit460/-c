#include<stdio.h>
int main()
{
    int n;
    printf("enter any number\n");
    scanf("%d",&n);
    if(n>=1 && n<=7)
    printf("it is a weak day");
    else
    printf("it is not a weak day");
    return 0;
}