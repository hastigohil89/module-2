#include<stdio.h>
#include<conio.h>

void main()
{
  int a[3][3],i,j;
  clrscr();
  printf("\n enter 2 D array A\n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
	 printf("\n enter %d row & %d column:",i,j);
	 scanf("%d",&a[i][j]);
      }
  }
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
	printf("\n a[%d][%d]=%d",i,j,a[i][j]);
      }
	printf("\n");
    }
 getch();
}