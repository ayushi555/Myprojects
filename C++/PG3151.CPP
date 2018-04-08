#include<iostream.h>
void main()
{
int a,b,c,g,sg,s;
cout<<"enter the three no.s;";
cin>>a>>b>>c;
if((a>b) && (a>c))
{
g=a;
if(b>c)
{sg=b; s=c;}
if(c>b)
{sg=c; s=b;}
}
if((b>c) && (b>a))
{
g=b;
if(a>c)
{sg=a; s=c;}
if(c>a)
{sg=c; s=a;}
}
   if((c>b) && (c>a))
{
g=c;
if(b>a)
{sg=b; s=a;}
if(a>b)
{sg=a; s=b;}
}
cout<<"greatest =="<<g;
cout<<"\n second greatest =="<<sg;
cout<<"\n smallest=="<<s;
}