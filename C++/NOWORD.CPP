#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int i,l,c=0;
char ch[44];
cout<<"enter";
gets(ch);
l=strlen(ch);
for(i=0;i<=l-1;i++)
{
if(ch[i]==' ')
c++;
}
cout<<c+1;   }