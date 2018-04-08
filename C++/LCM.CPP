#include<iostream.h>
void main()
{
int l,n,i,p;;
cout<<"enter two no.s:";
cin>>n>>p;
for(i=1;i<=n*p;i++)
{
if((n*p)%i==0)
l=i;
}
cout<<"lcm of two no.s is:"<<l;
}



