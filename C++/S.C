#include<stdio.h>
#include<conio.h>
void main()
{
int s,n,i,j,k;
clrscr();
printf("enter the value of n");
scanf("%d",&n);
s=n-1;
for(i=1;i<=n;i++)
{
for(j=1;j<=s;j++)
{
printf(" ");
}
s--;
for(k=1;k<=2*i-1;k++)
{
printf("%d",k);
}
printf("\n");
}
getch();
}