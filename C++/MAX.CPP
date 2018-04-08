#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,min;
clrscr();
printf("enter value of a b and  c");
scanf("%d%d%d",&a,&b,&c);
if(a<b)
{
if(a<c)
{
min=a;
printf("%d =",min);
}
else
{
min=c;
printf(" min %d =",min);
}
}
 else
{
if(min<b)
{
min=min;
printf("%d =",min);
}
else
{
min=b;
printf("%d =",min);
 }
 }
 getch();
  }