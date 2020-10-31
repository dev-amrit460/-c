#include<stdio.h>
void main()
{
   char str[100];
   char q;
   printf("Enter desired character ");
   scanf("%c",&q);
   printf("Enter a string ");
   scanf("%s",str);

   for(int i=0; str[i]!=0;i++){
       if(str[i]==q)
       {
           printf("you entered %c which is at %d place in string %s\n",q,i,str);
       }
   }
}