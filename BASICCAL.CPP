#include<stdio.h>
#include<conio.h>
void main()
{
int a,x,y,z;
clrscr();
printf("\nEnter 1 for Addition");
printf("\nEnter 2 for Subtraction");
printf("\nEnter 3 for Multiplication");
printf("\nEnter 4 for Division\n");

scanf("%d",&a);
if(a==1)
 {
 printf("Enter two numbers:");
 scanf("%d %d",&x,&y);
 z=x+y;
 printf("Addition is:%d",z);
 }
 if(a==2)
 {
 printf("Enter two numbers:");
 scanf("%d %d",&x,&y);
 z=x-y;
 printf("Subtraction is:%d",z);
 }
 if(a==3)
 {
 printf("Enter two numbers:");
 scanf("%d %d",&x,&y);
 z=x*y;
 printf("Multiplication is:%d",z);
 }
 if(a==4)
 {
 printf("Enter two numbers:");
 scanf("%d %d",&x,&y);
 z=x/y;
 printf("Division is:%d",z);
 }

 getch();
 }

