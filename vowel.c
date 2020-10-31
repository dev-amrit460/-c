#include<stdio.h>
int main()
{
    char n;
    printf("enter any alphabet\n");
    scanf("%c",&n);
    if(n=='a'||'e'||'i'||'o'||'u'||'A'||'E'||'I'||'O'||'U')
    printf("it is a vowel");
    else
    printf("it is a consonent");
    return 0;
}