#include<stdio.h>
#include<conio.h>
void main()
{ int m;
char g;
clrscr();
printf("ENTER THE MARKS:m");
scanf("%d",&m);
if(m>=80 && m<=100)
{
 g='A';
 }
 else if(m>=60 && m<80)
g='B';
else if(m>=50 && m<60)
g='C';
else if(m>=40 && m<50)
g='D';
else if(m>=30 && m<40)
g='E';
printf("THE GRADE IS :  %c" ,g);


getch();
}