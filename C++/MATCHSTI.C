#include<stdio.h>
#include<conio.h>
void main()
{
int b,i,k,matchsticks=0;
char a;
clrscr();
printf("PLAYER.DO YOU WANT TO PLAY? \n");
scanf("%ch",&a);
if(a=='y' || a=='Y')
{
for(i=1;i<=4;i++)
{
printf("ENTER YOUR NO. OF MATCHSTICKS-");
scanf("%d",&k);
if(k>=1 && k<=4)
{
matchsticks+=k;
printf("YOU PICKED UP %d MATCHSTICKS.NOW COMPUTER'S TURN. \n",k);
b=5-k;
printf("COMPUTER PICKS UP %d MATCHSTICKS.IT'S YOUR TURN AGAIN.\n",b);
matchsticks+=b;
printf("MATCHSTICKS =%d \n",matchsticks);
}
else
{
printf("YOU ARE DISQUALIFIED \n");
break;
}
}
printf("PLAYER LOSES.COMPUTER WINS.");
}
else
{
printf("GAME OVER \n");
}
getch();
}



