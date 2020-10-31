#include<stdio.h>
void main()
{
    int a[10],i,max,z=0,x=0;
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    max=a[0];
    for(i=0;i<10;i++)
        {
            if(a[i]>max)
            {
               max=a[i];
               x=i;
            }
        }
printf("maximum is %d position is %d",max,x+1);
}