#include<stdio.h>
#include<conio.h>
void main()
{
int j,i,n,a,c=0;
clrscr();
for(i=1;i<=999;i++)
{
n=i;
while(n>0)
{
a=n%10;
c=c+a*a*a;
n=n/10;
}
for(j=1;j<=1;j++)
{
if(i==c)
{
printf("%d\t",c);
}
}
}
getch();
}