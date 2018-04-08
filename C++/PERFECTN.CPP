#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int j,t,n=1,i,sum=0;
cout<<"enter  no.";
cin>>n;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
if(i%j==0)
{sum+=j;
t=sum-j;
}
if(t==j)
cout<<"its a perfect no"<<j;
}
}
}