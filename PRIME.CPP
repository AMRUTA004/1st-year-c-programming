//program to check whether the number is prime or not
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,f=0;
clrscr();
printf("Enter any positive number:");
scanf("%d",&n);
 for(i=2;i<=n-1;i++)
 {
  if(n%i==0)
   {
   f=1;
   }
   }
  if(f==0)
  {
  printf("It is a prime number");
  }
  else
  {
  printf("It is not a prime number");
  }
getch();
}

