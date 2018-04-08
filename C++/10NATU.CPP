#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
float SUMFUN(int f,int g);
int main()
{
    float x,n;
    cout << "Enter the value of x" << endl;
    cin>>x;
    cout<<"Enter the no. of terms:"<<endl;
    cin>>n;
    float ans=SUMFUN(x,n);
    cout<<"Sum of series is :"<<ans;
    return 0;
}

float SUMFUN(int f,int g)
{
    float k=1,b,sum=0,m,z;
    for(int i=1;i<=2*g;i++)
    {
        m=pow(f,i);
        z=m/i;
        if(i%2==1)
        {
            k=k+1;
            {
                b=z*pow(-1,k);
                sum=sum+b;
            }

        }
    }
    return sum;
}
