#include<stdio.h>
#include<conio.h>
void main()
{
	char str[5];
	int len=0;
	clrscr();
	scanf("%s",&str);
	char ch=' ';
	while(ch!='\0')
	{
		ch=str[len];
		len++;
	}
	len--;
	printf("Length is %d.",len);
	getch();
}





















