#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,a[20][20],sum=0,j,n;
cout<<"enter the n";
cin>>n;
cout<<"enter the elements:";
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{cout<<" ";
cin>>a[i][j]; } cout<<"\n";
}
for(i=n-1;i>=0;i--)
{
for(j=n-1


;j>=0;j--)
{if(i==j)
sum+=a[i][j];}
}
cout<<sum;

}

