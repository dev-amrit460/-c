#include<stdio.h>
int  main()
{
    char s[200],p[200];
    int i,j,z,k,count=0;
    printf("Enter any string");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    count++;
    printf("reverse is given below :");
    for(j=count-1;j>=0;j--)
    {z++,
        p[z]=s[j];
    printf("%c",s[j]);
    }
    for(k=0;k<count;k++)
    {
        if(p[k]!=s[k])
        printf("palindrome");
        else
        {
            printf("no");
        }
        
    }
}