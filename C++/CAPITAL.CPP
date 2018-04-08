#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<stdio.h>
void main()
{
clrscr();
char ch[30];
int l,i,t;
cout<<"enter the word";
cin>>ch;
gets(ch);
l=strlen(ch);
cout<<toupper (ch[0]);
for(i=1;i<=l;l++)
{
if(ch[i]==' ')
{
cout<<"."<<toupper (ch[i+1]);
t=i+1;
}
}
while(ch[t]|='\o')
cout<<ch[t++];
}