#include<iostream.>
void main()
{
else
{ switch(m)
{case 1: k=31;  strcpy(month,"JANUARY"); break;
case 2:  k=29; strcpy(month,"FEBURARY");break;
case 3:  k=31;strcpy(month,"M A R C H"); break;
case 4:k=30;strcpy(month,"A P R I L")  ;break;
case 5: k=31;  strcpy(month,"M   A   Y");break;
case 6: k=30; strcpy(month," J U N E")  ;break;
case 7: k=31;  strcpy(month," J U L Y");break;
case 8:  k=31;
strcpy(month,"   AUGUST");break;
case 9:k=30;strcpy(month,"SEPTEMBER")   ;break;
case 10: k=31; strcpy(month,"  OCTOBER");break;
case 11:  k=30;strcpy(month," NOVEMBER");  break;
case 12: k=31;strcpy(month," DECEMBER"); break;
}
if(arr[k]=='s')
gotoxy(7,20);
if(arr[k]=='t')
gotoxy(13,20);
if(arr[k]=='u')
gotoxy(19,20);
if(arr[k]=='v')
gotoxy(25,20);
if(arr[k]=='w')
gotoxy(31,20);
if(arr[k]=='x')
gotoxy(37,20);
if(arr[k]=='y')
gotoxy(1,20);
u=wherex(); v=wherey();
for(i=1;i<=k;i++)
{ cout<<i;
if(u==37&&v==20)
cout<<endl;
if(u==37&&v==20)
cout<<endl;
if(u==37&&v==20)
cout<<endl;


}
} //else
















char oop(int j,int t,int e,int a,int r,int b,int w)
{ int i,k;char arr[34],day[7]={'s','t','u','v','w','x','y'},month[15];
for(i=1;j<=6,i<=31;i++,j++)
{
if(i==t||i==e||i==a||i==r||i==w)
j=0;
arr[i]=day[j];
}
cout<<arr[b];
for(int m=1;m<=12;m++)       //12 baar
{
switch(m)
{
case 1: k=31;  strcpy(month,"JANUARY"); break;
case 2:  k=29; strcpy(month,"FEBURARY");break;
case 3:  k=31;strcpy(month,"    MARCH"); break;
case 4:k=30;strcpy(month,"    APRIL")  ;break;
case 5: k=31;  strcpy(month,"  M  A  Y");break;
case 6: k=30; strcpy(month,"  J U N E")  ;break;
case 7: k=31;  strcpy(month,"  J U L Y");break;
case 8:  k=31; strcpy(month,"   AUGUST");break;
case 9:k=30;strcpy(month,"SEPTEMBER")   ;break;
case 10: k=31; strcpy(month,"OCTOBER  ");break;
case 11:  k=30;strcpy(month," NOVEMBER");  break;
case 12: k=31;strcpy(month," DECEMBER"); break;
}

gotoxy(8,6);cout<<month;
if(arr[b]=='s')
gotoxy(1,10);
if(arr[b]=='t')
gotoxy(7,10);
if(arr[b]=='u')
gotoxy(13,10);
if(arr[b]=='v')
gotoxy(19,10);
if(arr[b]=='w')
gotoxy(25,10);
if(arr[b]=='x')
gotoxy(31,10);
if(arr[b]=='y')
gotoxy(37,10);
for(i=1;i<=k;i++)
{if(arr[i-1]=='y')
cout<<endl;
if(i<10)
cout<<i<<"     ";
if(i>=10&&i<=11)
cout<<i<<"    ";
if(i>11)
cout<<i<<"    ";
}
system("pause");
}