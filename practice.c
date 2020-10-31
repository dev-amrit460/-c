#include<stdio.h>
void main()
{
    int i,j,n,p;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("Now input array to sort\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {for(j=i+1;j<n;j++)
    if(a[i]<a[j])
    {p=a[i];
    a[i]=a[j];
    a[j]=p;
    }
    }
    for(i=0;i<n;i++)
    printf("\t%d",a[i]);
}