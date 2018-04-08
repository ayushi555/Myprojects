#include<stdio.h>
#include<conio.h>
void main()
{
int p,t,h;
float amt,rate,ci,d,c=1.0;
clrscr();
printf("enter the principal and time-");
scanf("%d %d",&p,&t);
printf("Enter the rate-");
scanf("%f",&rate);
d=1+(rate/100);
for(h=1;h<=t;h++)
{
c=c*d;
}
amt=p*c;
ci=amt-p;
printf("compound interest=%f",ci);
getch();
}
