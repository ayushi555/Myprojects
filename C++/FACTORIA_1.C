#include<stdio.h>
#include<conio.h>
void main()
{
	int num,i;
	long fact;
	clrscr();
	printf("Enter the number whose factorial is to be found.\n");
	scanf("%d",&num);
	fact=1;
	for (i=1;i<=num;i++)
		fact=fact*i;
	printf("The factorial of %d is %ld.",num,fact);
	getch();
}
