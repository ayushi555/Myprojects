#include<conio.h>
#include<iostream.h>
#include<math.h>
float sum(int n,int x);
void main()
{
clrscr();
float p,c,a;
cout<<"enter the value of x and n:";
cin>>p>>c;
a=sum(p,c);
cout<<a;}
float sum(int x,int n)
{
float t,s=0;
int i,j;


 for(i=1,j=1;i<=n,j<=n;j++,i++)
{t=pow(x,i)/i;
   if(j%2==0)
    t=t*-1;

s=s+t;
i++; }
return s;

}



