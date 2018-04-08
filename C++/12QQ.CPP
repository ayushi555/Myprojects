#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int k,s=0,f=0,g=0,i,n;
cout<<"enter the no. of employees:";
cin>>n;
for(i=1;i<=n;i++)
{
cout<<"age of"<<i<<"employee"<<"is";
cin>>k;
if('k'<=35 && 'k'>=26)
f++;
if('k'<=45 && 'k'>=36)
g++;
if('k'<=55 && 'k'>=46)
s++;
}
cout<<"the no. of people in the age grp";
cout<<"\n26--35 is"<<f;
cout<<"\n36--45 is"<<g;
cout<<"\n46--55 is"<<s;
}
