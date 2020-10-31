#include<stdio.h>
int main(){
   /* 2D array declaration*/
   int disp[3][3];
   /*Counter variables for the loop*/
   int i, j,sum=0;
   for(i=0; i<3; i++) {
      for(j=0;j<3;j++) {
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &disp[i][j]);
      }
   }
   //Displaying array elements
   printf("Two Dimensional array elements:\n");
   for(i=0; i<3; i++) {
      for(j=0;j<3;j++) {
         printf("%d ", disp[i][j]);
         if(i+j==2){
          sum=sum+disp[i][j];
         }
      }
      printf("\n");
   }
   printf("%d",sum);
   return 0;
}