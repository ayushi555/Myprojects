#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,min;
clrscr();
printf("enter value of a b and  c");
scanf("%d%d%d",&a,&b,&c);
if((a<b)&&(a<c))
{
printf("a is min");
}
if((b<a)&&(b<c))
{
 printf("b is min") ;
 }
 if((c<a)&&(c<b))
 printf("c is min");
 getch();
 }