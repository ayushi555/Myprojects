#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,max;
clrscr();
printf("enter the value of a");
scanf("%d",&a);
printf("enter the value of b");
scanf("%d",&b);
printf("enter the value of c");
scanf("%d",&c);
if(a>b)
{
if(a>c)
max=a;

}
if(b>a)
{
if(b>c)
max=b;
else
max=c;
}

printf("the maximum of three number is %d",max);
getch();
}




