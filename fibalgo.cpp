#include<iostream>
#include<cstdint>

using namespace std;
int main()
{
    int n;
    cin>>n;
    long long fib[n];
    fib[0]=0;
    fib[1]=1;
    for(int i=2; i<n; i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    for(int i=0; i<n; i++)
    {
        cout<<fib[i]<<' ';
    }
    // cout<<fib[n-1];
    return 0;
}