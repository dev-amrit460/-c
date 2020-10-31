#include<stdio.h>
int main()
{
    int a[5];
    for(int i=0;i<=4;i++)
    {
        printf("Enter %d element\n",i+1);
        scanf("%d",&a[i]);
    }
    printf("you have Entered\n");
    for(int j=4;j>=0;j--)
    {
        printf("%d",a[j]);
    }
}