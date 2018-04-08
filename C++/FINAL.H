#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
char l[1],tic[12],name1[20],name2[20],p1,p2;
int i,j,o,c,h,q;
clrscr();
cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * ";
cout<<"\n*                      -----  -----   ----                                  *";
cout<<"\n*                        |      |    |                                      *";
cout<<"\n*                        |      |    |                                      *";
cout<<"\n*                             -----   ----                                  *";
cout<<"\n*                                                                           *";
cout<<"\n*                                                                           *";
cout<<"\n*                      -----   ----     ----                                *";
cout<<"\n*                        |    |    |   |                                    *";
cout<<"\n*                        |    |----|   |                                    *";
cout<<"\n*		         |    |    |    ----                                *";
cout<<"\n*                                                                           *";
cout<<"\n*                                                                           *";
cout<<"\n*                      -----   ----     ----                                *";
cout<<"\n*                        |    |    |   |                                   *";
cout<<"\n*                        |    |    |   ----                                    *";
cout<<"\n*		         |     |---|    | ---                                *";
cout<<"\n*                                                                           *";
cout<<"\n*                                                                           *";
cout<<"\n*                                                                           *";
cout<<"\n*                                                                           *";
cout<<"\n* press any number to start:                                                             * ";
cout<<"\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * ";
gotoxy(29,23);
cin>>q;
start:
clrscr();
cout<<"                         WELCOME TO TIC TAC TOE                                ";
cout<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"                            MAIN MENU                                           ";
cout<<endl<<endl;
cout<<"[1] Introduction to the game";
cout<<endl<<endl<<endl<<"[2] Instructions for the game";
cout<<endl<<endl<<endl<<"[3] Play the game";
cout<<endl<<endl<<endl<<"[4] Quit the game";
cout<<endl<<endl<<endl<<"Enter Any number (1-4) To Select An Option:--";
cin>>o;
if(o==1)
{clrscr();
cout<<endl<<endl<<"              *******ooooooo    INTRODUCTION    ooooooo********";
cout<<"\n1.Two and Only two players  can play this game";
cout<<"\n2.A player wins the game if he occupies";
cout<<"\n--a single row or";
cout<<"\n--a single diagonal or";
cout<<"\n--a single column or";
cout<<"\nThe game is drawn if none of the players are able to occupy \na single row/column/diagonal"<<endl<<endl;
cout<<endl<<endl;
cout<<"\nRETURN TO MAIN MENU";
cout<<"press (b)";
cin>>l;
goto start;
}
if(o==2)
{
clrscr();cout<<"                        INSTRUCTIONS                              ";
cout<<endl<<endl<<endl;
cout<<"\n1.Two Players will enter two different marks.....";
cout<<endl<<endl;
cout<<" 1 | 2 | 3 ";
cout<<"\n---|---|---";
cout<<"\n4 | 5 | 6 ";
cout<<"\n---|---|---";
cout<<"\nSelect A Number (1-9) to occupy the space you want as shown...";
cout<<"FOR INSTANCE if you to occupy 2nd box enter 2 and so on....";
cout<<"RETURN TO MAIN MENU press (b)";
cin>>h;
goto start;}
if(o==3)
{
clrscr();
cout<<"                             LET'S START                                   ";
cout<<endl<<endl<<endl<<"              PLAYER NUMBER 1,Enter your name:";
cin>>name1;
cout<<endl<<endl<<endl<<"	       PLAYER NUMBER 2, Enter your name:";
cin>>name2;
cout<<endl<<endl<<name1<<endl<<endl<<"\nEnter your mark:-";
cin>>p1;
cout<<endl<<endl<<name2<<endl<<endl<<"\nEnter uour mark:-";
cin>>p2;
clrscr();
cout<<"                              1 | 2 | 3  ";
cout<<"\n                             ---|---|---";
cout<<"\n                      	      4 | 5 | 6  ";
cout<<"\n                             ---|---|---";
cout<<"\n                              7 | 8 | 9  ";
for(i=1;i<10;i++)
{
for(j=1;j<3;j++)
{
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<j<<"entr the box no.::";
cin>>c;
 if(c==1)
{gotoxy(31,1);
cin>>tic[1];
goto chh;
}
else if(c==2)
{gotoxy(35,1);
cin>>tic[2];
goto chh;}
else if(c==3)
{gotoxy(39,1);
cin>>tic[3];
goto chh;}
else if(c==4)
{gotoxy(31,3);
cin>>tic[4];
goto chh;}
else if(c==5)
{gotoxy(35,3); //credit for goto dheeraj
cin>>tic[5];
goto chh ;}
else if(c==6)
{gotoxy(39,3);
cin>>tic[6];
goto chh; }
else if(c==7)
{gotoxy(31,5);
cin>>tic[7];
goto chh;}
else if(c==8)
{gotoxy(35,5);
cin>>tic[8];
goto chh;}
else if(c==9)
{gotoxy(39,5);
cin>>tic[9];
goto chh;  }
else
cout<<"invalid choice";
chh:
if((tic[3]==tic[6]) && (tic[6]==tic[9]))
cout<<" result";
else if((tic[2]==tic[5]) && (tic[5]==tic[8]))
cout<<"xx";
else if((tic[1]==tic[4]) && (tic[4]==tic[7]))
cout<<" result";
else if((tic[2]==tic[5]) && (tic[5]==tic[7]))
cout<<"d";
else if((tic[1]==tic[5]) && (tic[5]==tic[9]))
cout<<" result";
else if((tic[1]==tic[2]) && (tic[2]==tic[3]))
cout<<" result";
else if((tic[4]==tic[5]) && (tic[5]==tic[6]))
cout<<" result";
else if((tic[7]==tic[8]) && (tic[8]==tic[9]))
{clrscr();cout<<" result";  }
}
}clrscr();
cout<<"game drawwwwwwwww";
}}