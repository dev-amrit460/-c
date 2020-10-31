#include<stdio.h>
void main()
{
    char s[100];
    int begin,middle,end,length=0;
    gets(s);
    while(s[length]!='\0')
    length++;
middle=length/2;
end=length-1;
for(begin=0;begin<middle;begin++)
{if(s[begin]!=s[end])
{printf("not");
break;}
end--;
}
if(begin==middle)
printf("palingrome.\n");
}