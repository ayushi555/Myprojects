#include<iostream.h>
void main()
{
int l,n,max,i,s,p;;
cout<<"enter two no.s:";
cin>>n>>p;
if(n>p)
{
max=n;
s=p;
}
else
{max=p;
s=n;}
for(i=1;i<=max;i++)
{
if((max%i==0) &&(s%i==0))
l=i;
}
cout<<"hcf of two no.s is:"<<l;
}



