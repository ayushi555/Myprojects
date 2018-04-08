#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,max;
	clrscr();
	printf("Enter the elements of the array.\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=1;i<10;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("The greatest element of the array is %d.",max);
	getch();
}