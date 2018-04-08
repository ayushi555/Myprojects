#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i;
int matchsticks;
clrscr();
for(i=1;i<5;i++)
{
printf("PLAYER.PLEASE PICK UP 1-4 MATCH STICKS AS PER YOUR DESIRE.\n");
scanf("%d",a);
matchsticks+=a;
printf("YOU PICKED UP %d MATCHSTICKS.NOW COMPUTER'S TURN. \n",a);
b=5-a;
printf("COMPUTER PICKS UP %d MATCHSTICKS.IT'S YOUR TURN AGAIN.\n",b);
matchsticks+=b;
}
printf("MATCHSTICKS =%d \n",matchsticks);
printf("PLAYER LOSES.COMPUTER WINS.");
getch();
}