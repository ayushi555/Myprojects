#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
	int a,b,c;
	float disc,r1,r2;
	clrscr();
	printf("Enter the coefficient of x^2 \n");
	scanf("%d",&a);
	printf("Enter the coefficient of x.\n");
	scanf("%d",&b);
	printf("Enter the value of the constant.\n");
	scanf("%d",&c);
	disc=(b*b)-(4*a*c);
	if(disc>0)
	{
		r1=(-b+sqrt(disc))/(2.0*a);
		r2=(-b-sqrt(disc))/(2.0*a);
		printf("The roots of the equation are real and distinct= %f,%f",r1,r2);
	}
	else if (disc==0)
	{
		r1=(-b)/(2.0*a);
		printf("The roots of the equation are real and equal=%f",r1);
	}
	else
	{
		printf("The roots of the equation are imaginary.");
	}
	getch();
}

