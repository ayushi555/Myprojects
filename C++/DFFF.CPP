#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
char l[1],tic[3][3],name1[20],name2[20],mark,y,z,p1,p2;
int m,o,ch,i,j,f=0,s=0,g=0,h=0,b=0,d=0,t=0,n=0,c=0,win=0;
clrscr();
start:
cout<<"***********welcome to TIC TAC TOE**************************";
cout<<endl<<endl<<endl;
cout<<"#####  MAIN MENU  #####";
cout<<endl<<endl;
cout<<"[1] Introduction to the game";
cout<<"\n[2] Instructions for the game";
cout<<"\n[3] Play the game";
cout<<"\n[4] quit the game";
cout<<"\nEnter ur choice:::";
cin>>o;
if(o==1)
{clrscr();
cout<<endl<<endl<<"          *******oooooooINTRODUCTIONooooooo********";
cout<<"\n1.Two and Only two players play can this game";
cout<<"\n2.A player wins the game if he occupies";
cout<<"\n#a single row or";
cout<<"\n#a single diagonal or";
cout<<"\n#a single column or";
cout<<"\nThe game is drawn if none of the players are able to occupy \na single row/column/diagonal"<<endl<<endl;
cout<<endl<<endl;
cout<<"\nRETURN TO MAIN MENU";
cout<<"press (l)";
cin>>l;
if(l==l)
goto start;
}
if(o==2)
{
cout<<"                        INSTRUCTIONS                              ";
cout<<endl<<endl<<endl;
cout<<"\n1.Two Players will enter two different marks such as # $ % & x 0.....";
cout<<endl<<endl;
cout<<"  1 | 2 | 3 ";
cout<<"\n---|---|---";
cout<<"\n4 | 5 | 6 ";
cout<<"\n---|---|---";
cout<<"\nSelect A Number (1-9) to occupy the space you want as shown...";
cout<<"FOR INSTANCE if you to occupy 2nd box enter 2 and so on....";
}
if(o==3)
{
clrscr();
cout<<"                             LET'S START                                   ";
cout<<endl<<endl<<endl<<"              PLAYER NUMBER 1,Enter your name:";
cin>>name1;
cout<<endl<<endl<<endl<<"	       PLAYER NUMBER 2, Enter your name:";
cin>>name2;
cout<<endl<<endl;

cout<<name1<<"\n     Enter your mark---";
cin>>p1;
p1=y;
cout<<name2<<"\n     Enter uour mark---";
cin>>p2;
p2=z;
clrscr();
cout<<"   1 | 2 | 3 ";
cout<<"\n ---|---|---";
cout<<"\n 4 | 5 | 6 ";
cout<<"\n ---|---|---";
cout<<"\n 7 | 8 | 9 ";
for(i=1;i<9;i++)
{
for(j=1;j<3;j++)
{
cout<<"player no."<<j;
if (j==1)
mark=p1
;
if(j==2)
mark=p2;
cout<<"Enter ur choice:\n";
cin>>ch;
if ((ch>0) && (ch<10))
{
switch(ch)
{
case 1:tic[0][0]=mark;f++;
       if(f>1)
       {
       cout<<"SPACE IS ALREADY OCCUPIED....\n Enter another choice";
       cin>>ch;
       }break;
case 2:tic[0][1]=mark; g++;
       if(g>1)
       {
       cout<<"SPACE IS ALREADY OCCUPIED....\n Enter another choice";
       cin>>ch;}break;
case 3:tic[0][2]=mark; h++;
       if(h>1)
       {
       cout<<"SPACE IS ALREADY OCCUPIED....\n Enter another choice";
       cin>>ch;
       }break;
case 4:tic[1][0]=mark; d++;
       if(d>1)
       {
       cout<<"SPACE IS ALREADY OCCUPIED....\n Enter another choice";
       cin>>ch;
       }break;
case 5:tic[1][1]=mark; b++;
       if(b>1)
       {
       cout<<"\aSPACE IS ALREADY OCCUPIED....\n Enter another choice";

       cin>>ch;
       }break;
case 6:tic[1][2]=mark; c++;
       if(c>1)
       {
       cout<<"\aSPACE IS ALREADY OCCUPIED....\n Enter another choice" ;
       cin>>ch;
       }break;
case 7:tic[2][0]=mark; s++;
       if(s>1)
       {
       cout<<"\aSPACE IS ALREADY OCCUPIED....\n Enter another choice";
       cin>>ch;
       }break;
case 8:tic[2][1]=mark; t++;
       if(t>1)
       {
       cout<<"\aSPACE IS ALREADY OCCUPIED....\n Enter another choice";
       cin>>ch;
       }break;
case 9:tic[2][2]=mark; n++;
       if(n>1)
       {
       cout<<"\aSPACE IS ALREADY OCCUPIED....\n Enter another choice";
       cin>>ch;
       }break;
}if(tic[0][0]==z && tic[0][1]==z && tic[0][2]==z)
{cout<<"CONGRATULATIONS "<<endl<<name2<<"\n  is the winner";win++;goto last;}
else if(tic[1][0]==z && tic[1][1]==z &&tic[1][2]==z)
{cout<<"CONGRATULATIONS "<<endl<<name2<<"\n  is the winner";win++;goto last;}
else if(tic[2][0]==z && tic[2][1]==z  && tic[2][2]==z)
{cout<<"CONGRATULATIONS "<<endl<<name2<<"\n  is the winner";win++;goto last;}
else if(tic[0][0]==z && tic[1][0]==z && tic[2][0]==z)
{cout<<"CONGRATULATIONS "<<endl<<name2<<"\n  is the winner";win++;goto last;}
else if(tic[0][1]==z && tic[1][1]==z && tic[2][1]==z)
{cout<<"CONGRATULATIONS "<<endl<<name2<<"\n  is the winner";win++;goto last;}
else if(tic[0][2]==z && tic[1][2]==z && tic[2][2]==z)
{cout<<"CONGRATULATIONS "<<endl<<name2<<"\n  is the winner";win++;goto last;}
else if(tic[0][0]==z && tic[1][1]==z && tic[2][2]==z)
{cout<<"CONGRATULATIONS "<<endl<<name2<<"\n  is the winner";win++;goto last;}
else if(tic[0][2]==z && tic[1][1]==z && tic[2][0]==z)
{cout<<"CONGRATULATIONS "<<endl<<name2<<"\n  is the winner";win++;goto last;}
else if(tic[0][0]==y && tic[0][1]==y && tic[0][2]==y)
{cout<<"CONGRATULATIONS "<<endl<<name1<<"\n  is the winner";win++;goto last;}
else if(tic[1][0]==y && tic[1][1]==y && tic[1][2]==y)
{cout<<"CONGRATULATIONS "<<endl<<name1<<"\n  is the winner";win++;goto last;}
else if(tic[2][0]==y && tic[2][1]==y  && tic[2][2]==y)
{cout<<"CONGRATULATIONS "<<endl<<name1<<"\n  is the winner";win++;goto last;}
else if(tic[0][0]==y && tic[1][0]==y && tic[2][0]==y)
{cout<<"CONGRATULATIONS "<<endl<<name1<<"\n  is the winner";win++;goto last;}
else if(tic[0][1]==y && tic[1][1]==y && tic[2][1]==y)
{cout<<"CONGRATULATIONS "<<endl<<name1<<"\n\t  is the winner";win++;goto last;}
else if(tic[0][2]==y && tic[1][2]==y && tic[2][2]==y)
{cout<<"CONGRATULATIONS "<<endl<<name1<<"\n  is the winner";win++;goto last;}
else if(tic[0][0]==y && tic[1][1]==y && tic[2][2]==y)
{cout<<"CONGRATULATIONS "<<endl<<name1<<"\n  is the winner";win++;goto last;}
else if(tic[0][2]==y && tic[1][1]==y && tic[2][0]==y)
{cout<<"CONGRATULATIONS "<<endl<<name1<<"\n  is the winner";win++;goto last;}
}
else
{cout<<"INVALID CHOICE \nEnter another choice";
cin>>ch;}
}}
if(win==0)
cout<<"game drawn";
last:
cout<<"GAME IS FINISHED";
}if(o==4)
exit(0);
}