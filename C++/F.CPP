#include<iostream.h>
void main()
{
int num,s;
cout<<"enter";
cin>>num;
do{
s=num%10;
cout<<" "<<s;
num=num/10;
}while(num!=0);
}
