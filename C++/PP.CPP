#include<string.h>
#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();
char ch[33];
int l,i,y=0,j;
cout<<"enter   ";
cin>>ch;
l=strlen(ch);
for(i=0,j=l-1;i<=l-1,j>=1;i++,j--)
{
if(ch[i]==ch[j])
y++;
}
if(y==(l-1))
cout<<"yes";
}