//program to swap numbers
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,temp;
 printf("Enter Two Numbers:");
 scanf("%d %d",&a,&b);
 temp=a;
 a=b;
 b=temp;
 printf("Swapped numbers are:%d %d ",a,b);
getch();
}