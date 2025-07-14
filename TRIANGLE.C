#include<stdio.h>
#include<conio.h>

void main()
{
  float height,base,area;
  clrscr();
  printf("\n enter base of the triangle:");
  scanf("%f",&base);
  printf("\n enter height of the triangle:");
  scanf("%f",&height);
  area= 0.5*base*height;
  printf("\n area of the triangle=%f",area);
  getch();
}