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
for(a=1;a<=lrr;a++)
{
for(g=1;g<=a;g++)
{
printf(" ");
}
for(h=1;h<=c+1;h++)
{
printf("* ");
}
printf("\n");
c--;
}
getch();
}