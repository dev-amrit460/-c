#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b;
    char c;
    printf("enter 1st number\n");
    scanf("%f",&a);
    printf("enter 2nd number\n");
    scanf("%f",&b);
    printf("press\n1 ADDITION\n2 SUBSTRACTION\n3 MULTIPLICATION\n4 DIVISION\n");
    scanf("\n%c",&c);
    switch(c)
    {
        case '1':
        printf("ADDITION=%f",(a+b));
        break;
        case '2':
        printf("SUBSTRACTION=%f",(a-b));
        break;
        case '3':
        printf("MULTIPLICATION=%f",(a*b));
        break;
        case '4':
        printf("DIVISION=%f",(a/b));
        break;
        default:
        printf("invalid input!!");
    }
    getch();
}