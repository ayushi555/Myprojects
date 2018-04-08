#include<iostream.h>
#include<fstream.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
clrscr();
fstream abc;
abc.open("notes.txt",ios::out);
char str[50];int count=0;
cout<<"enter the string:";
cin.getline(str,50);
abc<<str;
abc.close();
abc.open("notes.txt",ios::in);
if(!abc)
{
cout<<"could not open file";
exit(-1);
}
else
{
while(!abc.eof())
{abc>>str;
if(strcmp(str,"the")==0)
count++;
}
}
abc.close();
cout<<count;
}


