#include <stdio.h>
#include <conio.h>
void main()
{
	int a,b,c,max;
	clrscr();
	printf("Enter three numbers.\n");
	scanf("%d%d%d",&a,&b,&c);
	max=a>b?(a>c?a:c):(b>c?b:c);
	printf("The maximum of the three is %d.",max);
	getch();
}