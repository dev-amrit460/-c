#include<stdio.h>
#include<conio.h>
void main()
{
    int p,r,t; float si;
    printf("enter p r t\n");
    scanf("%d%d%d",&p,&r,&t);
    si=(p*r*t)/100.0;
    printf("si is %f",si);
    getch();
}