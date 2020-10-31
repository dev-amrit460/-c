#include <stdio.h>
#include <conio.h>
int outputMatrix(int array[3][3]);
int inputMatrix(int array[3][3]);
int main()
{
  int array[3][3];
  inputMatrix(array);
}
int inputMatrix(int array[3][3])
{
    int i,j;
	printf("Enter the element in 3*3 matrix\n");
	for(i = 0; i < 3; ++i)
	 for(j = 0; j < 3; ++j){
         scanf("%d", &array[i][j]);
     }
	outputMatrix(array);
}
int outputMatrix(int array[3][3])
{
	int diagsum=0,i,j,diagsum1=0;
    for(i = 0; i < 3; ++i)
    {
 for(j = 0; j < 3; ++j)
	 {
	 if(i==j) 
     diagsum = diagsum + array[i][j];
     }
    }
    printf("Diagonal sum of 3*3 matrix from left to right: %d\n",diagsum);
for(i = 0; i < 3; ++i){
for(j = 0; j < 3; ++j)
	 {
	 if(i+j==2) 
	 diagsum1=diagsum1+array[i][j];
     }
    }
     printf("Diagonal sum of 3*3 matrix from right to left: %d\n",diagsum1);
}

