#include<iostream>
using namespace std;

int main()
{
    for(int i=0; i<100; i++)
    {
        long long n=rand()%1000000000;
        cout<<n<<'\n';
        while(1)
        {
            cout<<'\t\t\t\t'<<n<<'\n';
            if(n%2==0)
            {n=n/2;cout<<"even\t"<<n<<'\n';}
            else
            {n=3*n+1;cout<<"odd\t"<<n<<'\n';}

            if(n==1)
            cout<<"PASS\n";
        };
        
    }
}