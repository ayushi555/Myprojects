#include<iostream.h>
#include<stdio.h>
void main()
{
char word[55],str[44];
int i,k=0;
cout<<"enter";
gets(str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]!=' ')
{
word[k]=str[i];
k=k+1;
}
else
{
while(k>0)
cout<<word[k--];
cout<<str[i];
}
}
}




