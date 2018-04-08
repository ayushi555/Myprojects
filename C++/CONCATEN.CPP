#include<conio.h>
#include<string.h>
#include<iostream.h>
#include<stdio.h>
void main()
{
clrscr();
int i,k;
char str1[22],str2[22],str3[55];
cout<<"enter two strings:";
gets(str1);
gets(str2);
for(i=0;str1[i]!=0;i++)
str3[i]=str1[i];
for(k=0;str2[i]!=0;k++)
str3[i+k]=str2[k];
cout<<str3;
}




