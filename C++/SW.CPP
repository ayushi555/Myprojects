#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char ch='A';
int i,j,l;
for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
{
cout<<ch;
ch=ch+1;
}
cout<<endl;
}
}
