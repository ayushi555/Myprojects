#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,num,count=0;
	clrscr();
	printf("Enter the elements of the array.\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the value to be searched.\n");
	scanf("%d",&num);
	for(i=0;i<10;i++)
	{
		if(a[i]==num)
		{
			count++;
		}
	}
	if(count==0)
	{
		printf("The given element does not exist in the array.");
	}
	else
	{
		printf("The given element is present %d times in the array.",count);
	}
	getch();
}
































