#include<stdio.h>
int main()
{
    int mark;
    printf("enter your marks:");
    scanf("%d",&mark);
    puts(mark>=40? "pass" : "fail");
    return 0;
}