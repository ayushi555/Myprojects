#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
char oop(int,int,int,int,int,int,int);
char oop(int,int,int,int,int,int,int,int);
void show()
{
cout<<"MON   TUE   WED   THU   FRI   SAT   SUN   "<<endl;
}


int leap(int year)
{ int a=0;
if(year%100==0)
{
if(year%400==0)
a++;
}
else if(year%4==0)
a++;
return a;
}

void main()
{
clrscr();



int year,i,k;
char month[10],p[10];
int d,o,f,s,t,g,v,q;
char dd[2];
long int ch;
 char c,z;

cout<<"enter the year(any year from 2000 to 2100):";
cin>>ch;     clrscr();
if(ch==2001||ch==2007||ch==2018||ch==2029||ch==2035||ch==2046||ch==2057||ch==2063||ch==2074||ch==2085||ch==2091)
 c='a';
if(ch==2002||ch==2013||ch==2019||ch==2030||ch==2041||ch==2047||ch==2058||ch==2069||ch==2075||ch==2086||ch==2097)
c='b';
if(ch==2003||ch==2014||ch==2025||ch==2031||ch==2042||ch==2053||ch==2059||ch==2070||ch==2081||ch==2087||ch==2098)
c='c';
if(ch==2009||ch==2015||ch==2026||ch==2037||ch==2043||ch==2054||ch==2065||ch==2071||ch==2082||ch==2093||ch==2099)
c='d';
if(ch==2010||ch==2021||ch==2027||ch==2038||ch==2049||ch==2055||ch==2066||ch==2077||ch==2083||ch==2094||ch==2100)
c='e';
if(ch==2005||ch==2011||ch==2022||ch==2033||ch==2039||ch==2050||ch==2061||ch==2067||ch==2078||ch==2089||ch==2095)
c='f';
if(ch==2006||ch==2017||ch==2023||ch==2034||ch==2045||ch==2051||ch==2062||ch==2073||ch==2079||ch==2090)
c='g';
if(ch==2024||ch==2052||ch==2080)
c='h';
if(ch==2008||ch==2036||ch==2064||ch==2092)
c='i';
if(ch==2020||ch==2048)
c='j';
if(ch==2004||ch==2032||ch==2060||ch==2088)
c='k';
if(ch==2016||ch==2044||ch==2072)
c='l';
if(ch==2028||ch==2056||ch==2084)
{c='m';}
if(ch==2012||ch==2040||ch==2068||ch==2096)
{c='n';}
z='j';
if(c=='a')
{
switch(z)
{
case 'j':d=1;  break;
case 'f':d=4;   break;
case 'm':d=4;   break;
case 'a':d=7;   break;
case 'y':d=2;   break;
case 'u':d=5;   break;
case 'l':d=7;   break;
case 'g':d=3;   break;
case 's':d=6;   break;
case 'o':d=1;   break;
case 'n':d=4;   break;
case 'd':d=6;   break;
 }
}
 if(c=='b')
{
switch(z)
{
case 'j':d=2;  break;
case 'f':d=5;   break;
case 'm':d=5;   break;
case 'a':d=1;   break;
case 'y':d=3;   break;
case 'u':d=6;   break;
case 'l':d=1;   break;
case 'g':d=4;   break;
case 's':d=7;   break;
case 'o':d=2;   break;
case 'n':d=5;   break;
case 'd':d=7;   break;
 }
}
if(c=='c')
{
switch(z)
{
case 'j':d=3;  break;
case 'f':d=6;   break;
case 'm':d=6;   break;
case 'a':d=2;   break;
case 'y':d=4;   break;
case 'u':d=7;   break;
case 'l':d=2;   break;
case 'g':d=5;   break;
case 's':d=1;   break;
case 'o':d=3;   break;
case 'n':d=6;   break;
case 'd':d=1;   break;
 }

 }
if(c=='d')
{
switch(z)
{
case 'j':d=4;  break;
case 'f':d=7;   break;
case 'm':d=7;   break;
case 'a':d=3;   break;
case 'y':d=5;   break;
case 'u':d=1;   break;
case 'l':d=3;   break;
case 'g':d=6;   break;
case 's':d=4;   break;
case 'o':d=4;   break;
case 'n':d=7;   break;
case 'd':d=2;   break;
 }
 }

if(c=='e')
{
switch(z)
{
case 'j':d=5;  break;
case 'f':d=1;   break;
case 'm':d=1;   break;
case 'a':d=4;   break;
case 'y':d=6;   break;
case 'u':d=2;   break;
case 'l':d=4;   break;
case 'g':d=7;   break;
case 's':d=3;   break;
case 'o':d=5;   break;
case 'n':d=1;   break;
case 'd':d=3;   break;
 }
}

if(c=='f')
{
switch(z)
{
case 'j':d=6;  break;
case 'f':d=2;   break;
case 'm':d=2;   break;
case 'a':d=5;   break;
case 'y':d=7;   break;
case 'u':d=3;   break;
case 'l':d=5;   break;
case 'g':d=1;   break;
case 's':d=4;   break;
case 'o':d=6;   break;
case 'n':d=2;   break;
case 'd':d=4;   break;
 }
 }
if(c=='g')
{
switch(z)
{
case 'j':d=7;  break;
case 'f':d=3;   break;
case 'm':d=3;   break;
case 'a':d=6;   break;
case 'y':d=1;   break;
case 'u':d=4;   break;
case 'l':d=6;   break;
case 'g':d=2;   break;
case 's':d=5;   break;
case 'o':d=7;   break;
case 'n':d=3;   break;
case 'd':d=5;   break;
 }
  }
if(c=='h')
{
switch(z)
{
case 'j':d=1;  break;
case 'f':d=4;   break;
case 'm':d=5;   break;
case 'a':d=1;   break;
case 'y':d=3;   break;
case 'u':d=6;   break;
case 'l':d=1;   break;
case 'g':d=4;   break;
case 's':d=7;   break;
case 'o':d=2;   break;
case 'n':d=5;   break;
case 'd':d=7;   break;
 } }

if(c=='i')
{
switch(z)
{
case 'j':d=2;  break;
case 'f':d=5;   break;
case 'm':d=6;   break;
case 'a':d=2;   break;
case 'y':d=4;   break;
case 'u':d=7;   break;
case 'l':d=2;   break;
case 'g':d=5;   break;
case 's':d=1;   break;
case 'o':d=3;   break;
case 'n':d=6;   break;
case 'd':d=1;   break;
 }  }
if(c=='j')
{
switch(z)
{
case 'j':d=3;  break;
case 'f':d=6;   break;
case 'm':d=7;   break;
case 'a':d=3;   break;
case 'y':d=5;   break;
case 'u':d=1;   break;
case 'l':d=3;   break;
case 'g':d=6;   break;
case 's':d=2;   break;
case 'o':d=4;   break;
case 'n':d=7;   break;
case 'd':d=2;   break;
 }   }
if(c=='k')
{
switch(z)
{
case 'j':d=4;  break;
case 'f':d=7;   break;
case 'm':d=1;   break;
case 'a':d=4;   break;
case 'y':d=6;   break;
case 'u':d=2;   break;
case 'l':d=4;   break;
case 'g':d=7;   break;
case 's':d=3;   break;
case 'o':d=5;   break;
case 'n':d=1;   break;
case 'd':d=3;   break;
 }
      }
if(c=='l')
{
switch(z)
{
case 'j':d=5;  break;
case 'f':d=1;   break;
case 'm':d=2;   break;
case 'a':d=5;   break;
case 'y':d=7;   break;
case 'u':d=3;   break;
case 'l':d=5;   break;
case 'g':d=1;   break;
case 's':d=4;   break;
case 'o':d=6;   break;
case 'n':d=2;   break;
case 'd':d=4;   break;
 }
       }
if(c=='m')
{
switch(z)
{
case 'j':d=6;  break;
case 'f':d=2;   break;
case 'm':d=3;   break;
case 'a':d=6;   break;
case 'y':d=1;   break;
case 'u':d=4;   break;
case 'l':d=6;   break;
case 'g':d=2;   break;
case 's':d=5;   break;
case 'o':d=7;   break;
case 'n':d=3;   break;
case 'd':d=5;   break;
 } }

if(c=='n')
{
switch(z)
{
case 'j':d=7;  break;
case 'f':d=3;   break;
case 'm':d=4;   break;
case 'a':d=7;   break;
case 'y':d=2;   break;
case 'u':d=5;   break;
case 'l':d=7;   break;
case 'g':d=3;   break;
case 's':d=6;   break;
case 'o':d=1;   break;
case 'n':d=4;   break;
case 'd':d=6;   break;
 } }
show();
o=1;

if(d==1)
{f=0;q=8;s=15;t=22;v=29;oop(f,q,s,t,v,o,ch);}
if(d==2)
{f=1;q=7,s=14,t=21,v=28;oop(f,q,s,t,v,o,ch);}
if(d==3)
 {f=2;q=6,s=13,t=20,v=27;oop(f,q,s,t,v,o,ch);}
if(d==4)
 {f=3;q=5,s=12,t=19,v=26;oop(f,q,s,t,v,o,ch);}
if(d==5)
 {f=4;q=4,s=11,t=18,v=25;oop(f,q,s,t,v,o,ch);}
if(d==6)
 {f=5;q=3,s=10,t=17,v=24,g=31;oop(f,q,s,t,v,o,g,ch);}
if(d==7)
 {f=6;q=2,s=9,t=16,v=23;g=30;oop(f,q,s,t,v,o,g,ch);}

}

char oop(int j,int t,int e,int a,int r,int b,int ye)
{ int u,v,i,f=4,k,y=4,x=4;char arr[34],month[16],day[7]={'s','t','u','v','w','x','y'};
for(i=1;j<=6,i<=31;i++,j++)
{
if(i==t||i==e||i==a||i==r)
j=0;
arr[i]=day[j];}
for(int m=1,s=9;m<=12;m++)       //12 baar
{

if(m==1)
{
switch(m)
{case 1: k=31;  strcpy(month,"JANUARY"); break;
case 2:  if(leap(ye)==1) k=29;else k=28;strcpy(month,"FEBURARY");break;
case 3:  k=31;strcpy(month,"M A R C H"); break;
case 4:k=30;strcpy(month,"A P R I L")  ;break;
case 5: k=31;  strcpy(month,"M   A   Y");break;
case 6: k=30; strcpy(month," J U N E")  ;break;
case 7: k=31;  strcpy(month," J U L Y");break;
case 8:  k=31; strcpy(month,"   AUGUST");break;
case 9:k=30;strcpy(month,"SEPTEMBER")   ;break;
case 10: k=31; strcpy(month,"  OCTOBER");break;
case 11:  k=30;strcpy(month," NOVEMBER");  break;
case 12: k=31;strcpy(month," DECEMBER"); break;
}
cout<<month<<endl;
if(arr[1]=='s')
gotoxy(1,3);
if(arr[1]=='t')
gotoxy(7,3);
if(arr[1]=='u')
gotoxy(13,3);
if(arr[1]=='v')
gotoxy(19,3);
if(arr[1]=='w')
gotoxy(25,3);
if(arr[1]=='x')
gotoxy(31,3);
if(arr[1]=='y')
gotoxy(37,3);
for(i=1;i<=k;i++)
{if(arr[i-1]=='y')
cout<<endl;
if(i<10)
cout<<i<<"     ";
if(i>=10&&i<=11)
cout<<i<<"    ";
if(i>11)
cout<<i<<"    ";}u=wherex();v=wherey();
system("pause");
}
else
{
 switch(m)
{case 1: k=31;  strcpy(month,"JANUARY"); break;
case 2: if(leap(ye)==1) k=29;else k=28;  strcpy(month,"FEBURARY");break;
case 3:  k=31;strcpy(month,"M A R C H"); break;
case 4:k=30;strcpy(month,"A P R I L")  ;break;
case 5: k=31;  strcpy(month,"M   A   Y");break;
case 6: k=30; strcpy(month," J U N E")  ;break;
case 7: k=31;  strcpy(month," J U L Y");break;
case 8:  k=31; strcpy(month,"   AUGUST");break;
case 9:k=30;strcpy(month,"SEPTEMBER")   ;break;
case 10: k=31; strcpy(month,"  OCTOBER");break;
case 11:  k=30;strcpy(month," NOVEMBER");  break;
case 12: k=31;strcpy(month," DECEMBER"); break;
}

if(m==4||m==5||m==6)
{ if(m==4)
{ clrscr();show();}
cout<<"                 "<<month<<endl;
gotoxy(u,f);
f=f+8;
}
if(m==1||m==2||m==3)
{cout<<""<<month<<endl;gotoxy(u,s);}

if(m==7||m==8||m==9)
 {if(m==7)
{ clrscr();show();}
cout<<"                 "<<month<<endl;
gotoxy(u,y);
y=y+8;
}
if(m==10||m==11||m==12)
 {if(m==10)
{ clrscr(); show();}
cout<<"                 "<<month<<endl;
gotoxy(u,x);
x=x+8;
}

int w;

for(i=1;i<=k;i++)
{
w=wherex();
if(w==43)
cout<<endl;
if(i<10)
cout<<i<<"     ";
if(i>=10&&i<=11)
cout<<i<<"    ";
if(i>11)
cout<<i<<"    ";}u=wherex(); system("pause"); s=s+6;



}  //else


}
 return 0;
}

char oop(int j,int t,int e,int a,int r,int b,int w,int ye)
{ int u,v,i,f=4,k,y=4,x=4;;char arr[34],day[7]={'s','t','u','v','w','x','y'},month[15];

for(i=1;j<=6,i<=31;i++,j++)
{
if(i==t||i==e||i==a||i==r||i==w)
j=0;
arr[i]=day[j];
}


 for(int m=1,s=9;m<=12;m++)       //12 baar
{

if(m==1)
{
switch(m)
{case 1: k=31;  strcpy(month,"JANUARY"); break;
case 2: if(leap(ye)==1) k=29;else k=28; strcpy(month,"FEBURARY");break;
case 3:  k=31;strcpy(month,"M A R C H"); break;
case 4:k=30;strcpy(month,"A P R I L")  ;break;
case 5: k=31;  strcpy(month,"M   A   Y");break;
case 6: k=30; strcpy(month," J U N E")  ;break;
case 7: k=31;  strcpy(month," J U L Y");break;
case 8:  k=31; strcpy(month,"   AUGUST");break;
case 9:k=30;strcpy(month,"SEPTEMBER")   ;break;
case 10: k=31; strcpy(month,"  OCTOBER");break;
case 11:  k=30;strcpy(month," NOVEMBER");  break;
case 12: k=31;strcpy(month," DECEMBER"); break;
}
cout<<month<<endl;
if(arr[1]=='s')
gotoxy(1,3);
if(arr[1]=='t')
gotoxy(7,3);
if(arr[1]=='u')
gotoxy(13,3);
if(arr[1]=='v')
gotoxy(19,3);
if(arr[1]=='w')
gotoxy(25,3);
if(arr[1]=='x')
gotoxy(31,3);
if(arr[1]=='y')
gotoxy(37,3);
for(i=1;i<=k;i++)
{if(arr[i-1]=='y')
cout<<endl;
if(i<10)
cout<<i<<"     ";
if(i>=10&&i<=11)
cout<<i<<"    ";
if(i>11)
cout<<i<<"    ";}u=wherex();v=wherey();
system("pause");
}
else
{
switch(m)
{case 1: k=31;  strcpy(month,"JANUARY"); break;
case 2:  if(leap(ye)==1) k=29;else k=28;  strcpy(month,"FEBURARY");break;
case 3:  k=31;strcpy(month,"M A R C H"); break;
case 4:k=30;strcpy(month,"A P R I L")  ;break;
case 5: k=31;  strcpy(month,"M   A   Y");break;
case 6: k=30; strcpy(month," J U N E")  ;break;
case 7: k=31;  strcpy(month," J U L Y");break;
case 8:  k=31; strcpy(month,"   AUGUST");break;
case 9:k=30;strcpy(month,"SEPTEMBER")   ;break;
case 10: k=31; strcpy(month,"  OCTOBER");break;
case 11:  k=30;strcpy(month," NOVEMBER");  break;
case 12: k=31;strcpy(month," DECEMBER"); break;
}
if(m==4||m==5||m==6)
{ if(m==4)
{ clrscr();show();}
cout<<"                 "<<month<<endl;
gotoxy(u,f);
f=f+8;
}
if(m==1||m==2||m==3)
{cout<<""<<month<<endl;gotoxy(u,s);}

if(m==7||m==8||m==9)
 {if(m==7)
{ clrscr();show();}
cout<<"                 "<<month<<endl;
gotoxy(u,y);
y=y+8;
}
if(m==10||m==11||m==12)
 {if(m==10)
{ clrscr(); show();}
cout<<"                 "<<month<<endl;
gotoxy(u,x);
x=x+8;
}

int w;

for(i=1;i<=k;i++)
{
w=wherex();
if(w==43)
cout<<endl;
if(i<10)
cout<<i<<"     ";
if(i>=10&&i<=11)
cout<<i<<"    ";
if(i>11)
cout<<i<<"    ";}u=wherex(); system("pause"); s=s+6;



}  //else


}
 return 0;









}

