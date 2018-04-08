#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,n,b=0,c=0,d=0;
clrscr();
printf("enter the value of n");
scanf("%d",&n);
b=n;
while(n>0)
{
a=n%10;
c=(c+a)*10;
n=n/10;
}
printf("%d\n",c);
d=c/10;
printf("%d\n",d);
if(d==b)
{
printf("palin");
}
else
{
printf("not a palin");
}
getch();
}