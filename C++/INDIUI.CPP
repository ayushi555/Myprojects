#include<string.h>
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,l=0;
char ch[77],str[66];
cout<<"enter";
gets(str);
strcat(str," ");
for(i=0;str[i]!='\0';i++)
{ if(str[i]!=' ')
{
ch[l]=str[i];
l=l+1;
}
else
{
while(l>0)
{
cout<<ch[--l];
}
cout<<" ";}
}}





