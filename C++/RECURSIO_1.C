#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
	int num,f;
	clrscr();
	printf("Enter a number.\n");
	scanf("%d",&num);
	f=fact(num);
	printf("Factorial of %d is %d.\n",num,f);
	getch();
}

int fact(int n)
{
	if (n==0 || n==1)
	{
		return 1;
	}
	else
	{
		return(n*fact(n-1));
	}
}
