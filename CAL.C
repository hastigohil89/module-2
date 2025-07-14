#include<stdio.h>
#include<conio.h>

void main()
{
   int a,b,c;
   clrscr();
   printf("\n enter value of a:");
   scanf("%d",&a);
   printf("\n enter value of b:");
   scanf("%d",&b);
   c=a+b;
   printf("\n addition value of c:%d",a+b);
   c=a-b;
   printf("\n subtracation value of c:%d",a-b);
   c=a*b;
   printf("\n multiplication value of c:%d",a*b);
   c=a/b;
   printf("\n division value of c:%d",a/b);
   getch();
}