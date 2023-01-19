#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int st[10]={-1},top=-1,val,i;
int ch;
do
{
clrscr();
 printf("Enter 1 for push\n");
 printf("Enter 2 for pop\n");
 printf("Enter 3 for display\n");
 printf("Enter 4 for exit\n");
 scanf("%d",&ch);
switch (ch)
{
 case 1:if(top==9)
	 {
	 printf("\nOverflow");
	 }

	 else
	 {
	  printf("\nEnter the value:\n");
	 scanf("%d",&val);
	 top++;
	 st[top]=val;
	 }

	 break;
 case 2:if(top==0)
	 {
	 printf("Underflow");

	 }
	 else
	 {
	  top--;
	 }
	 break;
 case 3:for(i=top;i>=0;i--)
	{
	printf("\n%d",st[i]);
	}
	getch();
	break;
 case 4:exit(0);
	break;

 default:printf("Error");
	break;
 }
}
while (1);
getch();
}