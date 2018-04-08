#include<stdio.h>
#include<conio.h>
void main()
{
int i,k,b=0,n=0,j;
clrscr();
for(i=1;i<=4;i++)
{
n=n+i;
for(k=0;k<=i-1;k++)
{
b=k;
}
for(j=n-b;j<=n;j++)
{
printf("%d ",j);
}b=0;
printf("\n");
}
getch();
}
