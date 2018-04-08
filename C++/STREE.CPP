#include<iostream.h>
struct stu{
char name[20];
float marks[3];
} result;
void main()
{
float i,avg,sum=0;
cout<<"enter name:";
cin>>result.name;
cout<<"\n marks :";
for(i=1;i<=3;i++)
{
cout<<"subject"<<i;
cin>>result.marks[i];
sum+=result.marks[i];
}
avg=sum/3;
cout<<result.name;
cout<<sum;
cout<<avg;
}


