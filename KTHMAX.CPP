#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,t,k;
int x[10]={21,34,6,11,17,26,30,2,45,27};
clrscr();
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
 for(i=0;i<=9;i++)
  {
 printf("Enter the value inorder to find\n");
 scanf("%d",&k);
 printf("%d",x[10-k]);
 }
getch();
}
