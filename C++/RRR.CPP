#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();
int i,n,sum=0;
cout<<"enter the no.==";
cin>>n;
for(i=2;i<=n-1;i++)
{
if(n%i==0)
sum+=i;
}
if(sum==n)
cout<<"yes";
}





