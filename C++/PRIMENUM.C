#include<stdio.h>
#include<conio.h>
int prime(int);
void main()
{
	int i;
	clrscr();
	printf("The prime numbers between 1 to 1000 are:-\n");
	for(i=2;i<=1000;i++)
	{
		if(prime(i)==1)
		{
			printf("%d, ",i);
		}
	}
	getch();
}

int prime(int num)
{
	int j;
	for (j=2;j<=num/2;j++)
	{
		if (num%j==0)
		{
			return 0;
		}
	}
	return 1;
}















