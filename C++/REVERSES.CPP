#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,l,j,k=0;
char str[55];
cout<<"enter the string::";
gets(str);
for(i=0;i<='\0';i++)
{
if(str[i]!=' ')
k++;
else
{
while(k>0)
{cout<<str[k--];
}
}
}}