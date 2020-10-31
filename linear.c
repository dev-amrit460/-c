#include <stdio.h>
#include <conio.h>
int output(int array[],int key);
int main()
{
  int array[100], key, n;
  printf("Enter number of elements in array\n");
  scanf("%d", &n);
  printf("Enter %d integer(s)\n", n);
 for(int i=0;i<n;i++)
    scanf("%d", &array[i]);

  printf("Enter a number to search\n");
  scanf("%d", &key);
  output(array,key);
}
int output(int array[100], int key)
{   int n=100,found=0,i;

    
    for(i=0;i<n;i++){
    if(array[i]==key)
      {printf("%d is present at location %d.\n", key, i+1);
      found=1;
      break;
      }}
      
   if(!found)
     {
      printf("Element is not present");
     }
}

