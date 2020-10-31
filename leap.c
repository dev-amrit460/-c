#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    printf("enter a year to check for leap\n");
    scanf("%d",&year);
    if(year%400==0)
    printf("%d is a leap year\n",year);
    else if(year%100==0)
    printf("%d no leap\n",year);
    else if(year%4==0)
    printf("%d is a leap year\n",year);
    else
    printf("%d no leap\n",year);
    return 0;
    getch();
    
}