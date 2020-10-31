#include<stdio.h>
void swap(int *a,int *b)
{int c;
	c=*a;
	*a=*b;
	*b=c;
}
int main()
{
	int c,d;
	printf("enter two numbers\n");
	scanf("%d%d",&c,&d);
	printf("value of number before swapping is \t%d \t%d\n",c,d);
	
	swap(&c,&d);
	printf("value of numbers after swapping is \t%d \t%d\n",c,d);
	return 0;
}