#include<stdio.h>

int main()
{
    int n,i;
    char s[n][20];
    puts("enter number of string");
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
    printf("enter string %d\t",i+1);
    gets(s[i]);
    };
    puts("\nyour entered string is:\n");
    for(i=0;i<n;i++)
    {
    puts(s[i]);
    };
    return 0;
}