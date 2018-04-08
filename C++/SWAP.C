#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("ENTER THE FIRST NUMBER-");
scanf("%d",&a);
printf("ENTER THE SECOND NUMBER-");
scanf("%d",&b);
c=b-a;
a=a+c;
b=b-c;
printf("THE SWAPPED VALUES ARE=%d %d" ,a,b);
getch();
}