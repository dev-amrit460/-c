#include<stdio.h>
void main()
{
    int a,b;
    char ch;
    printf("provide two no ");
    scanf("%d%d",&a,&b);
    printf("choose a or s ");
    scanf(" %c",&ch);
    if(ch=='a')
    {
        printf("addition=%d",a+b);
    }
    else if(ch=='s')
    {
        printf("subtraction=%d",a-b);
    }
    else
    {
        printf("invalid input ");
    }
    
}