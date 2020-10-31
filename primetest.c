#include <stdio.h>

int main() {
   int a, b,temp,i, m;
   printf("Enter two numbers(intervals): ");
   scanf("%d %d", &a, &b);
   printf("Prime numbers between %d and %d are: ", a, b);
if(a>b)
{
    temp=a;
    a=b;
    b=temp;
}

  for(i=a;i<b;i++)
   {
         m=0;
        for(int j=2;j<i;j++){
         if(i%j==0)
         {
             m=1;
             break;
         }
       }
       if(m==0)
       {
           printf("\t %d",i);
       }
   }   
}