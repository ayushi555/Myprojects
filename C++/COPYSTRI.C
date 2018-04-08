#include<stdio.h>
#include<conio.h>
void main()
{
	char str[2],temp[2];
	int len,i;
	clrscr();
	scanf("%s",&str);
	for(len=0;str[len]!='\0';len++);
	for (i=0;i<=len;i++)
	{
		temp[i]=str[i];
	}
	printf("%s",temp);
	getch();
}