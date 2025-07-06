#include<stdio.h>
#include<conio.h>

void main()
{
  int a[5],i,sum=0;
  clrscr();
  printf("\n enter array elements \n");
  for(i=0;i<5;i++)
  {
     printf("\n enter %d element:" ,i);
     scanf("%d" ,&a[i]);
     sum=sum+a[i];
  }
    printf("\n sum:%d" ,sum);
    printf("\n array element are\n");
    for(i=0;i<5;i++)
 {
   printf("\n a[%d] : %d" ,i,a[i]);
 }
   getch();
}