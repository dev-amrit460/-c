#include<stdio.h>
int f1(int x,int y){
	return x-y;
}
int f2(){
	int a,b;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);
	return a*b;
}
void f3(int a){
	printf("square of %d is %d\n",a,a*a);
}
void f4(){
	int a,b;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);
	printf("sum of numbers %d and %d is %d\n",a,b,a+b);
}

int main(){
	int a,x,y,r1,r2;
	printf ("enter two numbers to get its difference\n");
	scanf("%d%d",&x,&y);
	r1=f1(x,y);
	printf("difference of %d and %d is %d\n",x,y,r1);
	r2=f2();
	printf("multiplication of value entered is %d\n",r2);
	printf("enter a number to get its square\n");
	scanf("%d",&a);
	f3(a);
	f4();
	return 0;
}
