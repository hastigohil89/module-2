#include<stdio.h>
#include<conio.h>

void main()
{
 int a,b,choice,ans;
 clrscr();
 printf("\n enter A:");
 scanf("%d",&a);
 printf("\n enter B:");
 scanf("%d",&b);
 printf("\n********\n");
 printf("\n\n1.addtion");
 printf("\n2.subtraction");
 printf("\n3.multiplcation");
 printf("\n4.division");
 printf("\n********\n");
 printf("\n\nenter your choice:");
 scanf("%d",&choice);
 printf("\n********\n");

 switch(choice)
 {
    case 1:
      ans=a+b
      printf("\n addition : %d",ans);
      break;
    case 2:
      ans=a-b
      printf("\n subtraction : %d",ans);
      break;
    case 3:
      ans=a*b
      printf("\n multiplication :%d" ,ans);
      break;
    case 4:
      ans=a/b
      printf("\n division : %d",ans);
      break;
    default:
      printf("\n invalid choice");
      break;
 }
    printf("\n********\n");
    getch();
}