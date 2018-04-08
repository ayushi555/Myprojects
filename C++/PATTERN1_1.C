#include <stdio.h>
#include <conio.h>
void main()
{
	int i,j,p,n;
	clrscr();
	n=1;
	for (i=1;i<=6;i++)
	{
		for (j=5;j>=i;j--)
		{
			printf(" ");
		}
		printf("*");
		if(i!=1)
		{
			for(p=1;p<=n;p++)
			{
				printf(" ");
			}
			n=n+2;
			printf("*\n");
		}
		else
		{
			printf("\n");
		}
	}
	getch();
}


