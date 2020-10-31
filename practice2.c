#include<stdio.h>
#include<math.h>
int fact(int a)
{ 
    int z=1;
    while(a>0)
    {z=a*z;
    a--;}
    return z;
}
void main()
{
int i;
float y,p,sum=.0;
printf("Enter value of angle");
scanf("%f",&p);
double x=(3.14*p/180);
for(i=0;i<50;i++)

{long int j=fact(2*i+1);
printf("%l",j);
    y=((pow(-1,i)*(pow(x,2*i+1)))/j);
sum=sum+y;}
printf("%f",sum);
}
