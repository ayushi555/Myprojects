#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,i,n;
	clrscr();
	printf("Enter a number.\n");
	scanf("%d",&n);
	a=0;
	b=1;
	c=0;
	if(n==1)
	{
		printf("The first %d elements of the Fibonacci Series are:-\n",n);
		printf("%d.",a);
	}
	else if(n==2)
	{
		printf("The first %d elements of the Fibonacci Series are:-\n",n);
		printf("%d,%d",a,b);
	}
	else if(n>2)
	{
		printf("The first %d elements of the Fibonacci Series are:-\n",n);
		printf("%d,%d,",a,b);
		for (i=1;i<=n-2;i++)
		{
			c=a+b;
			printf("%d",c);
			if(i!=n-2)
			{
				printf(",");
			}
			else
			{
				printf(".");
			}
			a=b;
			b=c;
		}
	}
	else
	{
		printf("Invalid Entry.");
	}
	getch();
}
