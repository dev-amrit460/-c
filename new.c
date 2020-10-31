#include <stdio.h>
#include <conio.h>
int main()
{
    int z;
    printf("write table of\n");
    scanf("%d",&z);
    for(int i=1;i<=10;i++)
    {
        printf("\n%d",i*z);
    }
    getch();
}