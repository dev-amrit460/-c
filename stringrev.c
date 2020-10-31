#include<stdio.h>
#include<conio.h>
 void main()
 {
     int i,j,k,m=0;
     char str[100],rev[100];
     printf("Enter a string ");
     scanf("%s", str);

     for(i=0;str[i] !=0;i++)
     {
     m++;
     }
     k=0;
     for(j=m-1;j>=0;j--)
     {
         rev[k]=str[j];
         k++;
     }
     printf("%s",rev);
 }