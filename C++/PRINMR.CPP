#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();
int n,j,i,f=0;
cout<<"enter";
cin>>n;
for(j=1;j<=n;j++)
{

for(i=1;i<=j;i++)
{
if(j%i==0)
f++;
}if(f==2)
cout<<j;}

}
