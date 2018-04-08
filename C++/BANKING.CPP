#include<iostream.h>
#include<conio.h>
class bank
{
public:


char name[10][20],typeacc[10][2];
int accno[10],i,ch,a;float bal_amt[10],d[10],w[10];
void initialize();
void display();
void deposit();
void withdraw();


};


void bank::initialize()
{
for(i=0;i<=2;i++)
{
cout<<"enter the name of depositiors:";
cin>>name[i];
cout<<"enter the type of your account(s /c):";
cin>>typeacc[i];
cout<<"enter the account no,";
cin>>accno[i];
cout<<"enter the balance amount:";
cin>>bal_amt[i];
}
}
void bank::deposit()
{
for(i=0;i<=2;i++)
{
cout<<"enter the amount you want to deopsit::";
cin>>d[i];
bal_amt[i]+=d[i];
}
}

void bank::withdraw()
{
do{
cout<<"enter your acc no:";
cin>>a;
for(i=0;i<=2;i++)
{
if(a==accno[i])
{
   if(bal_amt[i]>=1000)
   {cout<<"enter the money to b withdrawn:";
    cin>>w[i];  bal_amt[i]-=w[i];}

      else
      cout<<"not enoghh money:";
 }
}
cout<<"any other want to withdraww:(0/1):";
cin>>ch;
}
while(ch!=0);

}

void bank::display()
{
  for(i=0;i<=2;i++)
{cout<<"the name of depositiors:";
cin>>name[i];
cout<<" the type of your account(s /c):";
cin>>typeacc[i];
cout<<" the account no,";
cin>>accno[i];
cout<<" the balance amount:";
cin>>bal_amt[i];
}
}


void main()
{
clrscr();
bank t;
t.initialize();
t.deposit();
t.withdraw();
t.display();
}




