#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a=1,n;
clrscr();
printf("enter the value of n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf("*");
a++;
}
printf("\n");
}
getch();
}
