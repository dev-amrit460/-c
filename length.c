#include<stdio.h>
#include<string.h>
void main()
{
    char text[200];
    int begin,middle,end,length=0;
    gets(text);
    while(text[length]!='\0')
        length++;
    end=length-1;
    middle=length/2;
    for(begin=0;begin<middle;begin++)
    {
        if(text[begin]!=text[end])
        {
            printf("not a palindrome.\n");
            break;
        }
        end--;
    }
if(begin==middle)
printf("palindrome.\n");
}