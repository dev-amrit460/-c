#include<stdio.h>
int main()
{
    float a,b,c;
    printf("number a\n");
    scanf("%f",&a);
    printf("number b\n");
    scanf("%f",&b);
    printf("number c\n");
    scanf("%f",&c);
    if(a>b&&a>c)
    printf("a is greatest");
    if(b>c&&b>a)
    printf("b is greatest");
    if(c>b&&c>a)
    printf("c is greatest");
    getch();
}