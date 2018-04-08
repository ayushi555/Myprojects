#include<iostream.h>
#include<math.h>
void main()
{
int n,k,x,s=0,i;
cout<<"enter n and x";
cin>>n>>x;
for(i=0;i<=n;i++)
{
k=pow(x,i);
s=s+k;
}
cout<<s;
}