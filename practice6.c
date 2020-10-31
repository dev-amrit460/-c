#include<stdio.h>
void main()
{
char s[100];
    int i,length=0;
    gets(s);
    while(s[length]!='\0')
    length++;
    printf("%d\n",length);
    for(i=0;i<length;i++)
    printf("%s\n",s+i);
    for(i=length-2;i>=0;i--)
    printf("%s\n",s+i);
}