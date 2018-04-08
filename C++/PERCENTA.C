#include <stdio.h>
#include <conio.h>
void main()
{
	float perc;
	clrscr();
	printf("Enter the percentage of the marks obtained.");
	scanf("%f",&perc);
	if (perc>=80)
	{
		printf("1st Division is obtained.");
	}
	else if (perc>=60 && perc<80)
	{
		printf("2nd Division is obtained.");
	}
	else if (perc>=40 && perc<60)
	{
		printf("3rd Division is obtained.");
	}
	else
	{
		printf("The student has failed.");
	}
	getch();
}