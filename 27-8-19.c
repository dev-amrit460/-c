#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("enter a and b\n");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping a=%d and b=%d\n",a,b);
    return 0;
    getch();
}