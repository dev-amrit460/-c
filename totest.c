#include<stdio.h>
int main()
{
    int a[6]={2,3,4,1,5,9};
    for(int i=0;i<6;i++)
    {
        printf("%d",a[i]);
        
    }
    printf("\n");
    for(int i=5;i>=0;i--)
    {
        printf("\t%d",a[i]);
    }
}