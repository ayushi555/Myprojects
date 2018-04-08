#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int t,i,k,o=0,l,j;
char rev[33],str[66];
cout<<"enter";
gets(str);
for(i=0;str[i]!='\0';i++) ;
for(k=i;k>=0;k--)
{cout<<str[k];
rev[o]=str[k];
}
t=strcmp(str,rev);
if(t==0)
cout<<"palindrome yes";
}