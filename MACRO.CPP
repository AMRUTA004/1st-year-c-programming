#include<stdio.h>
#include<conio.h>
#define rst(a) (a)*(a)
void main()
{
clrscr();
int i=10,j;
j=rst(i++);  //(i++)*(i++)
printf(" %d ",i);
printf("%d",j);

getch();
}

