#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j;
clrscr();
printf("Enter any number:");
scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 printf("\n");
  for(j=n;j>=i;j--)
  {
  printf("*");
  }
 }
getch();
}