#include <stdio.h>
#include <conio.h>
void main()
{
	int num,pow,i,ans;
	clrscr();
	printf("Enter a number.\n");
	scanf("%d",&num);
	printf("Enter the power. \n");
	scanf("%d",&pow);
	ans=1;
	for(i=1;i<=pow;i++)
	{
		ans=ans*num;
	}
	printf("%d to the power %d is %d.",num,pow,ans);
	getch();
}