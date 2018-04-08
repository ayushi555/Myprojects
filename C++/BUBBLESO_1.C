#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,j,temp;
	clrscr();
	printf("Enter the elements of the array.\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The elements entered are:-\n");
	for(i=0;i<10;i++)
	{
		printf("%d, ",a[i]);
	}
	for (i=0;i<10-1;i++)
	{
		for (j=0;j<=10-i;j++)
		{
			if (a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nThe sorted array is :-\n");
	for (i=0;i<10;i++)
	{
		printf("%d \n",a[i]);
	}
	getch();
}