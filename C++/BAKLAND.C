#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a=0,c=0;
clrscr();
for(i=1;i<=160;i++)
{
n=i;
while(n>0)
{
a=n%10;
c=c+a*a*a;
n=n/10;
}
if(i==c)
{
printf("%d\t",c);
}
}
getch();
}