#include<iostream.h>
void main()
{
int f=0,i;
char ch[20];
cout<<"enter a word or sentence:";
cin>>ch;
for(i=0;i<=20;i++)
{
if(ch[i]=='a')
f++;
else if(ch[i]=='e')
f++;
else if(ch[i]=='i')
f++;
}
cout<<"vowels r"<<f;
}

