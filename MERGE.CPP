#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,t;
int A[10]={1,4,6,8,2,9,7,5,3,10};
int B[10]={11,13,15,12,17,20,19,18,14,16};
int C[20];

for(i=0;i<=19;i++)
 {
  if(i<=9)
  {
  C[i]=A[i];
  }
  else
 {
  C[i]=B[i-10];
 }
 }

 for(i=0;i<=19;i++)
 {
  for(j=0;j<=19;j++)
  {
   if(C[j]>C[j+1])
    {
     t=C[j];
     C[j]=C[j+1];
     C[j+1]=t;
     }
  }
  }
 for(i=0;i<=20;i++)
 {
 printf("\n%d",C[i]);
 }
 getch();
 }

