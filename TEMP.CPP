#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int c,f;
printf("Enter temperature in Celcuis:");
scanf("%d",&c);
 f=c*9/5+32;
printf("Temperature in Fahrenheit: %d",f);
getch();
}
