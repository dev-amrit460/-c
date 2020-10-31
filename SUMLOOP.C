#include<stdio.h>
#include<conio.h>
int main()
{   
    int a,b=0;
    scanf("%d",&a);
    while(a>=0)
    {
        b=a+b;
        a--;
    }
    printf("sum is %d",b);
    return 0;
    getch();
}