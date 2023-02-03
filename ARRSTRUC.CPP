#include<stdio.h>
#include<conio.h>
struct newdatatype{
int roll;
char name[20];
int marks;
};
typedef struct newdatatype student;
void main()
{
clrscr();
student st[3];
int i,j,k,t,max=0;
 for(i=0;i<=2;i++)
  {
   printf("Enter Roll no:");
   scanf("%d",&st[i].roll);
   printf("Enter Name:");
   scanf("%s",&st[i].name);
   printf("Enter Marks:");
   scanf("%d",&st[i].marks);
  }

 for(i=0;i<=2;i++)
 {
  if(st[i].marks>max)
  {
   max=st[i].marks;
   j=i;
  }
  }
 printf("\nHighest marks:%d",max);
 printf("\nHighest marks are obtained by %s\n",st[j].name);

 for(i=0;i<=2;i++)
 {
  if(st[i].marks<max)
  {
   max=st[i].marks;
   k=i;
  }
 }
 printf("\nMinimum marks is:%d",st[k].marks);
 printf("\nMinimum marks are obtained by %s\n",st[k].name);

 for(i=0;i<=2;i++)
 {
  t=st[j].marks;
  st[j].marks=st[k].marks;
  st[k].marks=t;
 }
 printf("\nSwapped marks are:%d %d\n",st[j].marks,st[k].marks);

  for(i=0;i<=2;i++)
  {
   printf("\nRoll no:%d",st[i].roll);
   printf("\nName:%s",st[i].name);
   printf("\nMarks:%d",st[i].marks);
  }

getch();
}