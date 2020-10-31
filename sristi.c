#include<stdio.h>
int main()
{
    int date,month,year;
    scanf("%d/%d/%d",&date,&month,&year);
    if(year>=1850&&year<=2050)
    {
        if(month>=1&& month<=12)
        {
            if(date==29 && month==2 && (year%400==0||(year%4==0&&year%100!=0)))
            printf("Date is valid.\n");
            else if((date>=1&&date<=31)&&(month==1||month==3||month==5||month==7||month==8||month==10||month==12))
            printf("Date is valid.\n");
            else if((date>=1&&date<=30)&&(month==4||month==6||month==9||month==11))
            printf("Date is valid.\n");
            else if((date>=1&&date<=28)&&(month==2))
            printf("Date is valid.\n");
            else
            printf("date is invalid.\n");
        }
        else
        {
            printf("month is not valid.\n");
        }
    }
    else
    {
        printf("year is not valid.\n");
    }
    return 0;
}