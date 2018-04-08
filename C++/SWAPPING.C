#include <stdio.h>
#include <conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("Enter the value of first variable.\n");
	scanf("%d",&a);
	printf("Enter the value of second variable.\n");
	scanf("%d",&b);
	printf("a=%d \n",a);
	printf("b=%d \n",b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping we have:-\n a=%d and b=%d",a,b);
	getch();
}