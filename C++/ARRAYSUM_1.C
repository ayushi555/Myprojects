#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,sum=0;
	float avg=0.0;
	clrscr();

	for (i=0;i<5;i++)
	{
		printf("Enter element number %d of the array.\n",(i+1));
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	avg=sum/5;
	printf("Sum=%d \n",sum);
	printf("Average=%f",avg);
	getch();
}


