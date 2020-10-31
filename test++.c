#include<stdio.h>
void main()
{
    int a,b;
    char ch;
    printf("enter two integers\n");
    scanf("%d%d",&a,&b);
    printf("a or s");
    scanf("%c",&ch);
    if(ch='a')
    {
        printf("addition=%d",a+b);
    }
    else if(ch='s')
    {
        printf("substration=%d",a-b);
    }
    else
    {
        printf("cccdr");
    }
    
    
}