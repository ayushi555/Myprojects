#include<iostream.h>
#include<math.h>
void main()
{
int fac=1,i,j,x,k,l,s=0;
cout<<"enter x";
cin>>x;
for(i=1;i<=6;i++)
{
for(j=i;j>=1;j--)
fac=fac*j;

k=pow(x,i)/fac;

if(i%2==0)
{k=k*-1;}
s=s+k;
}
cout<<s;
}


