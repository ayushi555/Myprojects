#include<iostream.h>
#include<conio.h>
struct num
{
int real[15];
float imagin[15];
}nvar ;
void main()
{
float add(float x,float y,float z,float w);
float mul(float x,float y,float z,float w);
float div(float x,float y,float z,float w);
float sub(float x,float y,float z,float w);

cout<<"enter the real and imaginary part of complex no.number:";
cin>>nvar.real[1]>>nvar.imagin[1];
cout<<"enter another :";
cin>>nvar.real[2]>>nvar.imagin[2];
cout<<"\n 1.addition \n2.subtraction \n3.multiplication \n4.division.";
cout<<"enter the operation no.:";
cin>>ch;
switch(ch)
{
case 1:cout<< add(nvar.real[1],nvar.imagin[1],nvar.real[2],nvar.imagin[2]);break;
case 2:cout<<sub(nvar.real[1],nvar.imagin[1],nvar.real[2],nvar.imagin[2]);break;
case 3:cout<<mul(nvar.real[1],nvar.imagin[1],nvar.real[2],nvar.imagin[2]);break;
case 4:cout<<div(nvar.real[1],nvar.imagin[1],nvar.real[2],nvar.imagin[2]);break;
default:cout<<"invalid choice";
}
}
add(float x,float y,float z,float w)
{
r=x+z;
i=y+w;
cout<<"the sum of c no.s is:"<<r<<"+"<<i;
}
 sub(float x,float y,float z,float w)
{
r=
i=
cout<<"the diff of c no.s is:"<<r<<"-"<<i;

}

div(float x,float y,float z,float w)
{
r=x+z;
cout<<"the sum of c no.s is:"<<r;
}

 mul(float x,float y,float z,float w)
{
r=nvar.real[2]+nvar.real[1];
cout<<"the sum of c no.s is:"<<r;
}


