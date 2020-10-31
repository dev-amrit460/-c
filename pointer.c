#include<stdio.h>
void main()
{
    int a[10]={10,20,30,40,50,60,70,80,90,95};
    for(int i=0;i<=9;i++)
    {
        printf("%d\t",*(a+i));
    }
}