#include<iostream.h>
sqlarge(int & x,int & y);
void main()
{
int a,b,q;
cout<<"enter  no.s:";
cin>>a>>b;
sqlarge(a,b);
cout<<"the squqre of larger no. is :"<<sqlarge(a,b);
}
sqlarge(int&x,int&y)
{
int q;
if(x>y)
q=x*x;
else
q=y*y;
return q;
}
