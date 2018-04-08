#include<stdio.h>
#include<conio.h>
void main()
{
float p,r,si;int t;
clrscr();
printf("ENTER THE PRINCIPAL,RATE-");
scanf("%f%f",&p,&r);
printf("ENTER THE TIME-");
scanf("%d",&t);
si=(p*r*t)/100;
printf("%f",si);
getch();
}