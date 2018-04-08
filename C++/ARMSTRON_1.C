#include<stdio.h>
#include<conio.h>
int Armstrong(int);
void main()
{
	int i;
	clrscr();
	printf("The Armstrong numbers between 1 to 10000 are:-\n");
	for(i=1;i<=10000;i++)
	{
		if(Armstrong(i)==1)
		{
			printf("%d, ",i);
		}
	}
	getch();
}

int Armstrong(int num)
{
	int a,j=0,temp=num;

	while(num>0)
	{
		a=num%10;
		num=num/10;
		j=j+(a*a*a);
	}
	if(temp==j)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}















