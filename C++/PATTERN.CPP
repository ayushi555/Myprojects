#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,min;
printf("ENTER THE VALUE OF a-");
scanf("%d",a);
printf("ENTER THE VALUE OF b-");
scanf("%d",b);
printf("ENTER THE VALUE OF c-");
scanf("%d",c);
if(a<b)
{
if(a<c)
{
min=a;
}
else
{
min=c;
}
}
else
{
min=b;
}
printf("%d",min);
getch();
}
