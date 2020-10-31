#include<stdio.h>
void main()
{
    int i,j,n,a[n],minimum;
    printf("enter no of value for array\t");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    minimum=a[0];
    for(j=0;j<n;j++)
    {if(minimum>a[j])
    minimum=a[j];       
    }
    printf("minimum is %d\n",minimum); 
}    
    