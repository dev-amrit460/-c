#include <stdio.h>
int main()
{
int a[10];
int sum=0, i,k,z;
printf("Enter ten numbers:\n");
for (i=0; i<10; i++)
{
scanf("%d", &a[i]); //array input (integer can be -ve, +ve or zero).
printf("\n");
}
for (i=0; i<10; i++)
{
k=z=a[i]; 
if(z<0)
{
    z=-z; // making -ve integer +ve for further steps.
}
k=k%100;
k=k/10;
if(k%5==0 & z>=10){ //Excluding integer less than 10 as there is no tenth place
    sum=sum+a[i];
}
}
printf("Sum = %d",sum);
}