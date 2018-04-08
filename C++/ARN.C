#include<stdio.h>
#include<conio.h>
void main()
{
int i,a=0,n,b=0,c=0,d=0,num;
clrscr();
printf("enter the value of n");
scanf("%d",&n);
printf("enter the no of digit");
scanf("%d",&num);
b=n;
for(i=1;i<=num;i++)
{
a=n%10;
c=c+a*a*a;
n=n/10;
}
d=c;
if(d==b)
{
printf("arm");
}
else
{
printf("not a palin");
}
getch();
}