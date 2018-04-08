#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>
void main()
{
int i,j,l,f=0;
char ch[50];
cout<<"enter a stringg";
gets(ch);
l=strlen(ch);
for(i=0,j=l-1;i<=l/2,j>=l/2;i++,j--)
{
if(ch[i]==ch[j])
f++;
}
if(f==(l-1)/2)
cout<<"rrrr";
}
