#include<stdio.h>
int main()
{
    float c,f;
    printf("enter the value of fahreinheit\n");
    scanf("%f",&f);
    c=(f-32.0)*(5.0/9);
    printf("In celsius it would be %f",c);
    return 0;
}