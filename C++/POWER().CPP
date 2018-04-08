#include<iostream.h>
#include<math.h>
power(int x,int y,int z) ;
void main()
{
int m,n,f,q;
cout<<"enter the no:";
cin>>m;
cout<<"enter the exponent:";
cin>>n;
power(m,n,f);

}
power(int x,int y=2)
{
int q;
q=pow(x,y);
return q;
}


