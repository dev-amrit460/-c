#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float a,r,p,t,CI;
    printf("enter p,r,n\n");
    scanf("%f%f%d",&p,&r,&n);
    t=1+(r/100);
    a=p*pow(t,n);
    CI=(a-p);
    printf("compound interest =%f",CI);
    return 0;
}