#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float a,b,c,r1,r2,d;
clrscr();
printf("enter the value of a");
scanf("%f",&a);
printf("enter the value of b");
scanf("%f",&b);
printf("enter the value of c");
scanf("%f",&c);
d=b*b-4*a*c;
if(d>0)
{
r1=(-b-sqrt(b*b-4*a*c))/(2*a);
r2=(-b+sqrt(b*b-4*a*c))/(2*a);
printf("the roots are real r1= %f,r2=%f", r1, r2);
}
if(d==0)
{
r1=(-b-sqrt(b*b-4*a*c))/(2*a);
r2=(-b+sqrt(b*b-4*a*c))/(2*a);
printf("the roots are equal r1=%f,r2=%f", r1,r2);
}
else if(d<0)
{
r1=(-b-sqrt(b*b-4*a*c))/(2*a);
r2=(-b+sqrt(b*b-4*a*c))/(2*a);
printf("the roots are imaginary r1=%f,r2=%f",r1,r2);
}
getch();
}


