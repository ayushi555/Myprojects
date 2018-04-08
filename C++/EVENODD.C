#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("ENTER ANY NUMBER-");
scanf("%d",&a);
if(a%2==0)
{
printf("%d is an even number.",a);
}
else
{
printf("%d is an odd number.",a);
}
getch();
}