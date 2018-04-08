#include<iostream.h>
#include<conio.h>
void main()
{
int i;
cout<<"enter the no. of weekdays:";
cin>>i;
switch (i)
{
case 1:cout<<" sunday";
case 2:cout<<"tuseday";
case 3:cout<<"wednesday";
case 4:cout<<"thursday";
case 5:cout<<"friday";
case 6:cout<<"saturday";
default:"invalid day no.";
};
}
