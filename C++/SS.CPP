#include<iostream.h>
void main()
{
int j,i,n;
for(i=0;i<=3;i++)
{
for(j=0;j<=3;j++)
{
if((i+j)>=3)
cout<<" *";
else
cout<<"    ";
}
cout<<endl;
}
}