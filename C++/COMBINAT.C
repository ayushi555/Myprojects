#include <stdio.h>
#include <conio.h>
int factorial(int); //prototype declaration
void main()
{
	int r,n,comb;
	clrscr();
	printf("Enter the value of n.\n");
	scanf("%d",&n);
	printf("Enter the value of r.\n");
	scanf("%d",&r);
	comb=factorial(n)/(factorial(r)*factorial(n-r));
	printf("Answer=%d",comb);
	getch();
}

int factorial(int num)
{
	int f,i;
	f=1;
	for (i=1;i<=num;i++)
	{
		f=f*i;
	}
	return f;
}

