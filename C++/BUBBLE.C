#include<stdio.h>
#include<conio.h>
void main ()
{
int i,j,temp,n;
int A[20];
clrscr();
printf("enter the no of element");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the elements");
scanf("%d",&A[i]);
}
for(i=0; i<n-1 ;i++)
{
for(j=0;j<n-i-1;j++)
{
if(A[j+1]<A[j])
{
temp=A[j+1];
A[j+1]=A[j];
A[j]=temp;
}
}
}
for(i=0;i<n; i++)
{
printf("%d \t",A[i]);
}
getch();
}
