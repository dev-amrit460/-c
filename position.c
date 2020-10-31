#include<stdio.h>
int main()
{
	int array[10]={14,52,63,45,65,84,10,96,51,62};
	int r,m=0;
	printf("numbers are given below\n");
	for(int i=0;i<=9;i++)
	printf("%d ",array[i]);
	
	printf("\nEnter number to search\n");
	scanf("%d",&r);
	for(int j=1;j<=9;j++)
	{
		if(r==array[j])
		{
			printf("It is found at  position=%d",j+1);
			m=1;
		}
	}
	if(m==0)
	printf("Not Found");
}
