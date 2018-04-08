#include<stdio.h>
#include<conio.h>
void main()
{
int ch;
clrscr();
printf("TO GENERATE WEEK DAYS");
printf("enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("MONDAY");
break;
case 2:printf("TUESDAY");
break;
case 3:printf("WEDENESDAY");
break;
case 4:printf("THURSDAY");
break;
case 5:printf("FRIDAY");
break;
case 6:printf("SATURDAY");
break;
case 7:printf("SUNDAY");
	break;
default:printf("wrong choice");
break;
}
getch();
}
