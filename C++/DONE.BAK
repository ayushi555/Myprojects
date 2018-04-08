#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
char l[1],tic[12],name1[20],name2[20],p1,p2,mark,n;
int k=0,r,i,j,o,c,h,q;
clrscr();
cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * ";
cout<<"\n*                      -----  -----   ----                                  *";
cout<<"\n*                        |      |    |                                      *";
cout<<"\n*                        |      |    |                                      *";
cout<<"\n*                        |    -----   ----                                  *";
cout<<"\n*                                                                           *";
cout<<"\n*                                                                           *";
cout<<"\n*                      -----   ----     ----                                *";
cout<<"\n*                        |    |    |   |                                    *";
cout<<"\n*                        |    |----|   |                                    *";
cout<<"\n*		         |    |    |    ----                                *";
cout<<"\n*                                                                           *";
cout<<"\n*                                                                           *";
cout<<"\n*                      -----   ----     ----                                *";
cout<<"\n*                        |    |    |   |                                    *";
cout<<"\n*                        |    |    |    ----                                *";
cout<<"\n*		         |    |    |   |                                    *";
cout<<"\n*                        |     ----     ----                                *";
cout<<"\n*                                                                           *";
cout<<"\n*                                                                           *";
cout<<"\n*                                                                           *";
cout<<"\n* press any number to start:                                                * ";
cout<<"\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * ";
gotoxy(29,22);
cin>>q;
start:
clrscr();
cout<<"                         WELCOME TO TIC TAC TOE                                ";
cout<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"                            MAIN MENU                                           ";
cout<<endl<<endl;
cout<<"[1] Introduction to the game";
cout<<endl<<endl<<endl<<"[2] Play the game";
cout<<endl<<endl<<endl<<"[3] Quit the game";
cout<<endl<<endl<<endl<<"Enter Any number (1-3) To Select An Option:--";
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
clrscr();
cout<<"                             LET'S START                                   ";
cout<<endl<<endl<<endl<<"       PLAYER NUMBER 1,Enter your name:";
cin>>name1;
cout<<endl<<endl<<endl<<"       PLAYER NUMBER 2, Enter your name:";
cin>>name2;
cout<<endl<<endl<<name1<<endl<<"\nEnter your mark:-";
cin>>p1;
cout<<endl<<endl<<name2<<endl<<"\nEnter uour mark:-";
cin>>p2;
clrscr();
cout<<"                              1 | 2 | 3  ";
cout<<"\n                             ---|---|---";
cout<<"\n                      	      4 | 5 | 6  ";
cout<<"\n                             ---|---|---";
cout<<"\n                              7 | 8 | 9  ";
for(i=1;i<10;i++)
{
if(k==0)
{
if(i%2==0)                   //checks if choice is valid or not
{j=2;mark=p2;}
else
{j=1;mark=p1;}
}
else
{
if(i%2==0)
{j=1;mark=p1;}
else
{j=2;mark=p2;}}
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"Player no.  "<<j<<" "<<"Enter the box no.:-";
cin>>c;
if((c<10) && (c>0))
{
if(c==1)
{gotoxy(31,1);
tic[1]=mark;
cout<<tic[1];goto chh;
}
else if(c==2)
{gotoxy(35,1);
tic[2]=mark;
cout<<tic[2];
goto chh;}
else if(c==3)
{gotoxy(39,1);
tic[3]=mark;
cout<<tic[3];
goto chh;}
else if(c==4)
{gotoxy(31,3);
tic[4]=mark;
cout<<tic[4];
goto chh;}
else if(c==5)
{gotoxy(35,3); //credit for goto dheeraj
tic[5]=mark;
cout<<tic[5];
goto chh ;}
else if(c==6)
{gotoxy(39,3);
tic[6]=mark;
cout<<tic[6];
goto chh; }
else if(c==7)
{gotoxy(31,5);
tic[7]=mark;
cout<<tic[7];
goto chh;}
else if(c==8)
{gotoxy(35,5);
tic[8]=mark;
cout<<tic[8];
goto chh;}
else if(c==9)
{gotoxy(39,5);
tic[9]=mark;
cout<<tic[9];
goto chh;  }
}
else
{
{k++;cout<<"invalid chioce";goto chh; }
}
chh:
{if((tic[3]==tic[6]) && (tic[6]==tic[9]))
{clrscr();cout<<endl<<endl<<endl<<endl<<endl<<"\n                   CONGRATULATIONS!!!!\n\n\n\nPlayer no. \n  "<<j<<"is    the    winner ";cout<<"\n\n\n\n\nTO GO BACK TO MAIN MENU PRESS b  OR PRESS E TO QUIT\n\n";cin>>n;if(n=='b')  goto start;else exit(0);}
else if((tic[2]==tic[5]) && (tic[5]==tic[8]))
{clrscr();cout<<endl<<endl<<endl<<endl<<endl<<"\n                    CONGRATULATIONS!!!!\n\n\n\nPlayer no."<<j<<"is    the    winner ";cout<<"\n\n\n\n\nTO GO BACK TO MAIN MENU PRESS b  OR PRESS E TO QUIT\n\n";cin>>n;if(n=='b')  goto start;else exit(0);}
else if((tic[1]==tic[4]) && (tic[4]==tic[7]))
{clrscr();cout<<endl<<endl<<endl<<endl<<endl<<"\n                    CONGRATULATIONS!!!!\n\n\n\nPlayer     no. "<<j<<"is      the     winner";cout<<"\n\n\n\n\nTO GO BACK TO MAIN MENU PRESS b  OR PRESS E TO QUIT\n\n";cin>>n;if(n=='b')  goto start;else exit(0); }
else if((tic[3]==tic[5]) && (tic[5]==tic[7]))
{clrscr();cout<<endl<<endl<<endl<<endl<<endl<<"\n                    CONGRATULATIONS!!!!\n\n\n\nPlayer     no."<<j<<"is     the    winner ";cout<<"\n\n\n\n\nTO GO BACK TO MAIN MENU PRESS b  OR PRESS E TO QUIT\n\n";cin>>n;if(n=='b')  goto start;else exit(0); }
else if((tic[1]==tic[5]) && (tic[5]==tic[9]))
{clrscr();cout<<endl<<endl<<endl<<endl<<"\n                          CONGRATULATIONS!!!!\n\n\n\nPlayer     no. "<<j<<"1s     the    winner";cout<<"\n\n\n\n\nTO GO BACK TO MAIN MENU PRESS b  OR PRESS E TO QUIT\n\n";cin>>n;if(n=='b') goto start;else exit(0);}
else if((tic[1]==tic[2]) && (tic[2]==tic[3]))
{clrscr();cout<<endl<<endl<<endl<<endl<<endl<<"\n                    CONGRATULATIONS!!!!\n\n\n\nPlayer      no"<<j<<"is      the      winner";cout<<"\n\n\n\n\nTO GO BACK TO MAIN MENU PRESS b  OR PRESS E TO QUIT\n\n";cin>>n;if(n=='b')  goto start;else exit(0);}
else if((tic[4]==tic[5]) && (tic[5]==tic[6]))
{clrscr();cout<<endl<<endl<<endl<<endl<<endl<<"\n                    CONGRATULATIONS!!!!\n\n\n\nPlayer      no. "<<j<<"is      the      winner";cout<<"\n\n\n\n\nTO GO BACK TO MAIN MENU PRESS b  OR PRESS E TO QUIT\n\n";cin>>n;if(n=='b')  goto start;else exit(0);}
else if((tic[7]==tic[8]) && (tic[8]==tic[9]))
{clrscr();cout<<endl<<endl<<endl<<endl<<endl<<"\n             CONGRATULATIONS!!!!\n\n\n\nPlayer     no."<<j<<"is     the     winner" ;cout<<"\n\n\n\n\nTO GO BACK TO MAIN MENU PRESS b  OR PRESS E TO QUIT\n\n";if(n=='b') goto start;else exit(0); }
else
{if(i==9) break;}
}
}
clrscr();
cout<<"                            GAME OVER              ";
cout<<"\n\n\n\n\nTO GO BACK TO MAIN MENU PRESS B::\n\n\n\n OR PRESS E TO QUIT\n\n";cin>>n;if(n=='b') goto start;else exit(0);
}}