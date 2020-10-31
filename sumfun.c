#include<stdio.h>
float sum(float x,float y)
{
    float c;
    c=x+y;
    return(c);
}
void main()
{
    float a,b,s;
    scanf("%f%f",&a,&b);
    s=sum(a,b);
    printf("%f",s);
}