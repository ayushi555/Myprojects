#include<iostream.h>
#include<stdio.h>
#include<conio.h>
struct info
{char name[45];
char desig[44];
int empno;
}worker;
void main()
{
clrscr();
int i,no;
info details[10];
for(i=0;i<3;i++)
{
cout<<"enter the details of"<<i<<" th  employee:";
cout<<"employ no.:";
cin>>details[i].empno;
cout<<"name ";
gets(details[i].name);
cout<<"designation:";
cin>>details[i].desig ;
}
cout<<"enter theempolyee no. whose details u want:";
cin>>no;
for(i=0;i<3;i++)
{
if(details[i].empno==no)
{
cout<<"details  of  "<<no<<" are as follows:";
cout<<"name:"<<details[i].name;
cout<<"designation: "<<details[i].desig;
}
}
}

