#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
char l[1],tic[12],name1[30],name2[30],k,p1,p2,mark,n,nm[20];
int r,i,j,o,c,h,q,x,e,g,t,b,u,p,m,z;
clrscr();
cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *";
cout<<"\n*               -----  -----   ----      ----- -----   ----                   *";
cout<<"\n*                 |      |    |            |   |   |  |                       *";
cout<<"\n*                 |      |    |            |   |---|  |                       *";
cout<<"\n*                 |    -----   ----        |   |   |   ----                   *";
cout<<"\n*                                                                             *";
cout<<"\n*                      -----  ------    -----                                 *";
cout<<"\n*                        |    |    |   |                                      *";
cout<<"\n*                        |    |    |   |---                                   *";
cout<<"\n*                        |    |    |   |                                      *";
cout<<"\n*                        |    ------    -----                                 *";


cout<<"\n*                                                                             *";
cout<<"\n*                     Press any number to start:                              *";

cout<<"\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *";
gotoxy(51,14);
cin>>q;
start:
clrscr();
cout<<"                         WELCOME TO TIC TAC TOE                                ";
cout<<"                            MAIN MENU                                           ";
cout<<endl<<"[1] Play the game";
cout<<endl<<"[2] Quit the game";
cout<<endl<<"Enter Any number (1-2) To Select An Option:--";
cin>>o;

if(o==1)
{
clrscr();
cout<<"--------------------------------------------------------------------------------";
cout<<"                             LET'S START                                   ";
cout<<"                             ------------       ";
cout<<endl<<"PLAYER NUMBER 1,Enter your name(#):";
cout<<endl<<"PLAYER NUMBER 2,Enter your name(0):";
cout<<"\n\n----------------------------------------------------------------------";
gotoxy(40,4);
gets(name1);
gotoxy(41,5);
gets(name2);
 p1='#';p2='0';
clrscr();
cout<<" 1 | 2 | 3  ";
cout<<"\n---|---|---";
cout<<"\n 4 | 5 | 6  ";
cout<<"\n---|---|---";
cout<<"\n 7 | 8 | 9  ";
cout<<"\n                                  |         |         ";
cout<<"\n                                  |         |          ";
cout<<"\n                           -------|---------|-------";
cout<<"\n                                  |         |          ";
cout<<"\n                                  |         |          ";
cout<<"\n                                  |         |          ";
cout<<"\n                           -------|---------|-------";
cout<<"\n                                  |         |          ";
cout<<"\n                                  |         |           ";
cout<<"\n                                  |         |        ";
for(i=1;i<12;i++)
{
if(i%2==0)
{j=2;mark=p2;
}
else
{j=1;
mark=p1;}
gotoxy(20,20);
cout<<"Player no.  "<<j<<" Enter the box no.:-";
cin>>c;
if(c==1)
{gotoxy(31,6);
tic[1]=mark;
cout<<tic[1];goto chh;
}
else if(c==2)
{gotoxy(40,6);
tic[2]=mark;
cout<<tic[2];
goto chh;}
else if(c==3)
{gotoxy(50,6);
tic[3]=mark;
cout<<tic[3];
goto chh;}
else if(c==4)
{gotoxy(31,10);
tic[4]=mark;
cout<<tic[4];
goto chh;}
else if(c==5)
{gotoxy(40,10);
tic[5]=mark;
cout<<tic[5];
goto chh ;}
else if(c==6)
{gotoxy(50,10);
tic[6]=mark;
cout<<tic[6];
goto chh; }
else if(c==7)
{gotoxy(31,14);
tic[7]=mark;
cout<<tic[7];
goto chh;}
else if(c==8)
{gotoxy(40,14);
tic[8]=mark;
cout<<tic[8];
goto chh;}
else if(c==9)
{gotoxy(50,14);
tic[9]=mark;
cout<<tic[9];
goto chh;  }
chh:
{if((tic[3]==tic[6]) && (tic[6]==tic[9]))
{gotoxy(50,5);cout<<"|";gotoxy(50,6);cout<<"|";gotoxy(50,7);cout<<"|";gotoxy(50,8);cout<<"|";gotoxy(50,9);cout<<"|";gotoxy(50,10);cout<<"|";gotoxy(50,11);cout<<"|";gotoxy(50,12);cout<<"|";gotoxy(50,13);cout<<"|";gotoxy(50,14);cout<<"|";gotoxy(50,15);cout<<"|";gotoxy(50,16);cout<<"|";gotoxy(19,20);cout<<"FOR     RESULT   PRESS  ANY KEY  :";cin>>k;
clrscr();cout<<endl<<endl<<endl<<endl<<endl<<"\n     ... CONGRATULATIONS!!!!\n\n\n\nPlayer no.   - "<<j;if(j==1) cout<<"  "<<name1<<" is    the    winner ";else cout<<"  "<<name2<<" is    the    winner ";cout<<"\n\n**************";cout<<"\nTO GO BACK TO MAIN MENU PRESS b  OR PRESS E TO QUIT\n\n";cin>>n;if(n=='b')  goto start;else exit(0);}
else if((tic[2]==tic[5]) && (tic[5]==tic[8]))
{ gotoxy(40,5);cout<<"|";gotoxy(40,6);cout<<"|";gotoxy(40,7);cout<<"|";gotoxy(40,8);cout<<"|";gotoxy(40,9);cout<<"|";gotoxy(40,10);cout<<"|";gotoxy(40,11);cout<<"|";gotoxy(40,12);cout<<"|";gotoxy(40,13);cout<<"|";gotoxy(40,14);cout<<"|";gotoxy(40,15);cout<<"|";gotoxy(40,16);cout<<"|";gotoxy(19,20);cout<<"FOR     RESULT   PRESS  ANY KEY  :";cin>>k;
clrscr();cout<<endl<<endl<<endl<<endl<<endl<<"\n ....CONGRATULATIONS!!!!\n\n\n\nPlayer no.  -"<<j;if(j==1) cout<<"  "<<name1<<" is    the    winner ";else cout<<name2<<"  "<<" is    the    winner ";cout<<"\n\n\n\n*************";cout<<"\n\nTO GO BACK TO MAIN MENU PRESS b  OR PRESS E TO QUIT\n\n";cin>>n;if(n=='b')  goto start;else exit(0);}
else if((tic[1]==tic[4]) && (tic[4]==tic[7]))
{gotoxy(31,5);cout<<"|";gotoxy(31,6);cout<<"|";gotoxy(31,7);cout<<"|";gotoxy(31,8);cout<<"|";gotoxy(31,9);cout<<"|";gotoxy(31,10);cout<<"|";gotoxy(31,11);cout<<"|";gotoxy(31,12);cout<<"|";gotoxy(31,13);cout<<"|";gotoxy(31,14);cout<<"|";gotoxy(31,15);cout<<"|";gotoxy(31,16);cout<<"|";gotoxy(19,20);cout<<"FOR     RESULT   PRESS  ANY KEY  :";cin>>k;
clrscr();cout<<endl<<endl<<endl<<endl<<endl<<"\n     CONGRATULATIONS!!!!\n\n\n\nPlayer     no. -"<<j;if(j==1) cout<<"  "<<name1<<" is    the    winner ";else cout<<"  "<<name2<<" is      the     winner";cout<<"\n\n\n****************";cout<<"\nTO GO BACK TO MAIN MENU PRESS b  OR PRESS E TO QUIT\n\n";cin>>n;if(n=='b')  goto start;else exit(0); }
else if((tic[3]==tic[5]) && (tic[5]==tic[7]))
{gotoxy(50,6);cout<<"/";gotoxy(48,7);cout<<"/";gotoxy(46,8);cout<<"/";gotoxy(44,9);cout<<"/";gotoxy(42,10);cout<<"/";gotoxy(40,11);cout<<"/";gotoxy(38,12);cout<<"/";gotoxy(36,13);cout<<"/";gotoxy(34,14);cout<<"/";gotoxy(32,15);cout<<"/";gotoxy(19,20);cout<<"FOR     RESULT     PRESS    ANY   KEY  :";cin>>k;
clrscr();cout<<endl<<endl<<endl<<endl<<endl<<"\n..CONGRATULATIONS!!!!\n\n\n\nPlayer     no. - "<<j;if(j==1) cout<<"  "<<name1<<" is    the    winner ";else cout<<"  "<<name2<<" is     the    winner ";cout<<"\n\n\n\n\n\n\n\n\n***********";cout<<"\nTO GO BACK TO MAIN MENU PRESS b  OR PRESS E TO QUIT\n\n";cin>>n;if(n=='b')  goto start;else exit(0); }
else if((tic[1]==tic[5]) && (tic[5]==tic[9]))
{gotoxy(31,6);cout<<"\\";gotoxy(33,7);cout<<"\\";gotoxy(35,8);cout<<"\\";gotoxy(37,9);cout<<"\\";gotoxy(39,10);cout<<"\\";gotoxy(41,11);cout<<"\\";gotoxy(43,12);cout<<"\\";gotoxy(45,13);cout<<"\\";gotoxy(47,14);cout<<"\\";gotoxy(49,15);cout<<"\\";gotoxy(19,20);cout<<"FOR     RESULT     PRESS    ANY   KEY  :";cin>>k;
clrscr();cout<<endl<<endl<<endl<<endl<<"\n  .CONGRATULATIONS!!!!\n\n\n\nPlayer     no. -"<<j;if(j==1) cout<<"  "<<name1<<" is    the    winner ";else cout<<"  "<<name2<<" is     the    winner";cout<<"\n\n\n\n\n\n\n\n\n****************";cout<<"\nTO GO BACK TO MAIN MENU PRESS b  OR PRESS E TO QUIT\n\n";cin>>n;if(n=='b') goto start;else exit(0);}
else if((tic[1]==tic[2]) && (tic[2]==tic[3]))
{gotoxy(29,6);cout<< "------------------------";gotoxy(19,20);cout<<"FOR     RESULT     PRESS    ANY   KEY  :";cin>>k;
clrscr();cout<<endl<<endl<<endl<<endl<<endl<<"\n. CONGRATULATIONS!!!!\n\n\n\nPlayer      no - "<<j;if(j==1) cout<<"  "<<name1<<" is    the    winner ";else cout<<"  "<<name2<<" is      the      winner";cout<<"\n\n\n\n\n\n\n\**********";cout<<"\nTO GO BACK TO MAIN MENU PRESS b  OR PRESS E TO QUIT\n\n";cin>>n;if(n=='b')  goto start;else exit(0);}
else if((tic[4]==tic[5]) && (tic[5]==tic[6]))
{gotoxy(29,12);cout<<"------------------------";gotoxy(19,20);cout<<"FOR     RESULT     PRESS    ANY   KEY  :";cin>>k;clrscr();cout<<endl<<"\n ... CONGRATULATIONS!!!!\n\n\n\nPlayer      no. - "<<j;if(j==1) cout<<"  "<<name1<<" is    the    winner ";else cout<<"  "<<name2<<" is      the      winner";cout<<"\n\n\n\n\n\n\n\n\n**************";cout<<"\n\nTO GO BACK TO MAIN MENU PRESS b  OR PRESS E TO QUIT\n\n";cin>>n;if(n=='b')  goto start;else exit(0);}
else if((tic[7]==tic[8]) && (tic[8]==tic[9]))
{gotoxy(29,14);cout<<"------------------------";gotoxy(19,20);cout<<"FOR     RESULT     PRESS    ANY   KEY  :";cin>>k;clrscr();cout<<endl<<"\n ...CONGRATULATIONS!!!!\n\n\n\nPlayer     no.- "<<j;if(j==1) cout<<"  "<<name1<<" is    the    winner ";else cout<<"  "<<name2<<" is     the     winner" ;cout<<"\n\n\n\n\n\n\n\n\n******************";cout<<"\n\TO GO BACK TO MAIN MENU PRESS b  OR PRESS E TO QUIT\n\n";if(n=='b') goto start;else exit(0); }
else
{if(i==9) break;}
}
}

cout<<"   GAME OVER          \n\n......................GAME DRAW......................    ";
cout<<"\nTO GO BACK TO MAIN MENU PRESS B::\n\n\n\n OR PRESS E TO QUIT\n\n";cin>>n;if(n=='b') goto start;else exit(0);
}if(c==3)
exit(0); }