#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a=1;
clrscr();
for(i=1;i<=5;i++)
{
for(n=1;n<=i;n++)
{
printf("%d ",a);
a=a+1;
}
printf("\n");
}
getch();
}
