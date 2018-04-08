#include<stdio.h>
#include<conio.h>
void main()
{
	char str[5];
	int i=0;
	clrscr();
	scanf("%s",&str);
	for (i=0;str[i]!='\0';i++);
	printf("The length is %d.",i);
	getch();
}