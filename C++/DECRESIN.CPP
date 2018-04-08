#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
cout<<"enter";
cin>>a>>b>>c;
if(a>b)
{
if(a>c)
cout<<"biggest is "<<a;
}
else if(b>a)
{
if(b>c)
cout<<"biggest is "<<b;
}else if(c>a)
{if(c>b)
cout<<"biggest is "<<c;
}
}
