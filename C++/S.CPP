#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();      int ar[18],n,i,j,t;
cout<<"enter the array:"; cin>>n;
for(i=0;i<n;i++)
cin>>ar[i];

for(i=0;i<n;i++)
{
for(j=0;j<n-1;--i,j++)
{
if(ar[j]>ar[j+1])
{t=ar[j]; ar[j]=ar[j+1];
ar[j+1];
ar[j=1]=t; }
}
}



}

