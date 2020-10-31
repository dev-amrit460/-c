#include<stdio.h>
void main()
{
    int i,j,n,a[n],maximum,minimum;
    printf("enter no of value for array\t");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    maximum=a[0];
    minimum=a[0];
    for(j=0;j<n;j++)
    {if(maximum<a[j])
    maximum=a[j];       
    if(minimum>a[j])
    minimum=a[j];
    }
    printf("maximum is %d\n",maximum);
    printf("minimum is %d\n",minimum);
}    
    