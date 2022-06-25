#include<iostream>
using namespace std;

//function to calculate GCD
int gcd(int a, int b)
{
    if (b==0)
    return a;
    
    else
    {
        int r=a%b;
        if (r==0)
        return b;
        gcd(b,r);
    }
}

long long lcm(int a, int b, int gcd)
{
    long long res = a/gcd*(long long)b;
    return (res);
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<lcm(a,b,gcd(a,b));
}