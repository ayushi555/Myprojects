#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,n;
clrscr();
printf("enter no of rows");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(k=1;k<=n-i;k++)
{
printf(" ");
}
for(j=1;j<=2*i-1;j++)
{
printf("%d",j);
}
printf("\n");
}
getch();
}

