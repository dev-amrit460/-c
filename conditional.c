#include<stdio.h>
#include<math.h>
int main()
{
    int x,check;
    scanf("%d",&x);
    check=pow(sin(x),2)+pow(cos(x),2);
    if(check==1)
    printf("yes it is equal to 1");
    return 0;
}