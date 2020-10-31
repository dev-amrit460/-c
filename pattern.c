#include<stdio.h>
void main()
{
    int i,j,m,n;
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=4;j++)
        {if(i==j||j==5-i-1)
        printf("*");
        else
        printf(" ");        
        }
        printf("\n");
    }
    
}