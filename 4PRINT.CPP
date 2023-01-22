#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int r;
printf("ENTER THE NUMMBER OF ROWS:");
scanf("%d",&r);
 for(int i=1;i<=r;i++)
 {
 printf("\n");
 for(int j=1;j<=r;j++)
 {
  if(i==1||i==r||j==1||j==r)
  {
  printf("*");
  }
    if(i==1||i==r||j==1||j==r)
  {{ printf("*");
   }   }
   else{
   printf(" ");
  }
  }}
getch();
}