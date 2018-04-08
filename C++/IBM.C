#include<stdio.h>
#include<conio.h>
void main()
{
int c,lrr,g,a,max,space,i,j,k,h;
clrscr();
printf("max stars-");
scanf("%d",&max);
space=max-1;
c=space;
lrr=space;
for(i=1;i<=max;i++)
{
for(j=1;j<=space;j++)
{
printf(" ");
}space--;
for(k=1;k<=i;k++)
{
printf("* ");
}
printf("\n");
}
for(a=1;a<=lrr;a++)
{
for(g=1;g<=a;g++)
{
printf(" ");
}
for(h=1;h<=c;h++)
{
printf("* ");
}
printf("\n");
c--;
}
getch();
}