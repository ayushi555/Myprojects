#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,o,j,k='A';
for(i=0;i<=5;i++)
{

for(j=0;j<=i;j++)
{
cout<<" "<<k;
for(o=1;o<=j;o++)
k=k+o;
}
cout<<endl ;
}


getch();
}