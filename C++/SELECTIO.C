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
	for (i=0;i<10;i++)
	{
		for (j=i+1;j<10;j++)
		{
			if (a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
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