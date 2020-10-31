#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,d;
    char i;
    float root1,root2,e,f,g;
    printf("enter the value of a, b, and c\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a==0)
    {
        printf("not a quadratic equation");
    }
    d=pow(b,2)-(4*a*c);
    e=-b/(2*a);
    f=-d;
    g=(pow(f,0.5)/2*a);
    if(d>0)
    {
     root1=((-b+pow(d,0.5))/(2*a));
     root2=((-b-pow(d,0.5))/(2*a));
     printf("roots are %f\t%f",root1,root2);
    }
    else if(d<0)
    {
     printf("root is %f + i(%f)\n",e,g);
     printf("root is %f - i(%f)\n",e,g);
    }
    else
    {
    printf("root is %f",e);
    }
       
}