#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();int n,q,i=0;
cout<<"enter rhe no.";
cin>>n;
do
{
q=n/10;
n=q;
i++;
}while(q!=0);
cout<<i;
}