//program to print reverse array
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int r,a[10];
a[0]=1;
a[9]=10;
 for(r=9;r>=0;r=r-1)
 {
 a[r]=r;
 }
  for(r=9;r>=0;r=r-1)
  {
  printf("%d",a[r]);
  }
getch();
}