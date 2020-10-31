#include<stdio.h>
 
void swap(int n1,int n2)                           
{ 
    int z;
    z=n1;
    n1=n2;
    n2=z;
    printf("\nThe values of n1 and n2 in the swap function after swapping are n1=%d n2=%d",n1,n2);
}       
 
void main( )
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    swap(n1,n2);                                          
    printf("\n After swapping \n n1=%d\n n2=%d",n1,n2);
}    

