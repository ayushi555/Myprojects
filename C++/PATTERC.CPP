#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j;
for(i=0;i<=3;i++)
{
for(j=0;j<=3;j++)
{if((i+j)>=3)
cout<<"  * ";
else
cout<<"  ";
}
cout<<endl;
} }