#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,i,ctr=0;
printf("ENTER THE NUMBER-");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
if(a%i==0)
{
ctr=ctr+1;
}
}
if(ctr==2)
{
printf("NUMBER IS PRIME.");
}
else
{
printf("NUMBER IS NOT PRIME.");
}
getch();
}