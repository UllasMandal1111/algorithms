#include<iostream>
using namespace std;

//function to calculate GCD
long long gcd(long long a, long long b)
{
    if (b==0)
    return a;
    
    else
    {
        long long r=a%b;
        if (r==0)
        return b;
        gcd(b,r);
    }

}

int main()
{
    long long a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
}