#include<stdio.h>
#include<conio.h>
int main()
{float P,R,T,SI;
printf("enter princple\n");
scanf("%f",&P);
printf("enter rate\n");
scanf("%f",&R);
printf("enter time\n");
scanf("%f",&T);
SI=P*R*T/100;
printf("si must be =%f",SI);
getch();
}