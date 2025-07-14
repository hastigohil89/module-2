xinclude<stdio.h>
#include<conio.h>

void main()
{
 float principal,rate,time,interest;
 clrscr();

 printf("\n enter principal amount:");
 scanf("%f",&principal);

 printf("\n enter rate of interest:");
 scanf("%f",&rate);

 printf("\n enter number of years:");
 scanf("%f",&time);

 interest=principal*rate*time/100;
 printf("\n simple interest=%f",interest);

 getch();
}