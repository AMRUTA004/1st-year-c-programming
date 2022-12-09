#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,t;
int x[10]={21,34,6,11,17,26,30,2,45,27};
 for(i=0;i<=9;i++)
 {
  for(j=0;j<=9;j++)
  {
   if(x[j]>x[j+1])
    {
     t=x[j];
     x[j]=x[j+1];
     x[j+1]=t;
    }
   }
  }
 for(j=0;j<=9;j++)
 printf("\n%d",x[j]);
getch();
}


