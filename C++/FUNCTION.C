#include<stdio.h>
#include<conio.h>
int rec(int );
void main()
{
int fact,n;
clrscr();
printf("enter the value of n");
scanf("%d",&n);
fact=rec(n);
printf("the factorial of the given number is %d",fact);
getch();
}
int rec(int a)
{
int f;
if(a==0)
return(1);
else
f=(a*rec(a-1));
return(f);
}



