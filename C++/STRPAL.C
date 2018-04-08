#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,c=0;
char a[100],b[100];
clrscr();
printf("enter no of elements");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nenter %d position =",i+1);
scanf("%s",&a[i]);
}
for(i=0;i<n;i++)
{
b[i]=a[i];
}
for(i=0;i<n;i++)
{
if(b[i]==b[n-i-1])
{
c=c+1;
}
else
{
printf("\nstring is not pallindrome");
break;
}
}
if(c==n)
{
printf("\nstring is pallindrome");
}
getch();
}

