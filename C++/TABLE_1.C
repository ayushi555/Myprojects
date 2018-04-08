#include<stdio.h>
#include<conio.h>
void main()
{
	int num,i,mult;
	clrscr();
	printf("Enter the number whose table is to be printed.\n");
	scanf("%d",&num);
	for (i=0;i<=10;i++)
	{
		mult=0;
		mult=num*i;
		printf("%d * %d = %d \n",num,i,mult);
	}
	getch();
}
