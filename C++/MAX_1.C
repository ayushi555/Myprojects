#include <stdio.h>
#include <conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("Please enter the value of the first number.");
	scanf("%d",&a);
	printf("Please enter the value of the second number.");
	scanf("%d",&b);
	printf("Please enter the value of the third number.");
	scanf("%d",&c);
	if (a>b)
	{
		if(a>c)
		{
			printf("The greatest number is=%d",a);
		}
		else
		{
			printf("The greatest number is=%d",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("The greatest number is=%d",b);
		}
		else
		{
			printf("The greatest number is=%d",c);
		}
	}
	getch();
}