#include <stdio.h>
#include <conio.h>
void main()
{
	int num,i;
	clrscr();
	printf("Enter a number.\n");
	scanf("%d",&num);
	printf("The even numbers till %d are:-\n",num);
	for (i=2;i<=num;i=i+2)
		printf("%d \n",i);
	getch();
}
