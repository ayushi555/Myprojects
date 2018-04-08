#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n=0,a=0,c=0;
clrscr();
for(i=1;i<=999;i++)
{
n=i;
for(j=1;j<=3;j++)
{
a=n%10;
c=c+a*a*a;
n=n/10;
}
if(c==i)
{
printf("%d\t",i);
}
}
getch();
}