#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,j;
clrscr();
printf("enter the number of rows n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf("*"
);
}
printf("\n");
}

getch();
}
