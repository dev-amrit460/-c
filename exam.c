#include<stdio.h>
#include<string.h>
void main()
{
    char str[20]="MECHANICAL DEPT";
    int s =strlen(str);
    str[5]='\0';
    s=s+strlen(str);
    printf("%d\n",s);
}