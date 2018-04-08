#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("ENTER THE VALUE OF A-");
scanf("%d",&a);
printf("ENTER THE VALUE OF B-");
scanf("%d",&b);
a=b-a;
b=b-a;
a=b+a;
printf("THE SWAPPED VALUES ARE=%d %d",a,b);
getch();
}