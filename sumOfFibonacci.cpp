#include<iostream>
using namespace std;

//we make use of the fact that : Sum of N fibonacci numbers = ((N+2)th fibonacci number - 1)
long long fibonacciSum(long long n)
{
    long long fibarr[n+3];
    fibarr[0]=0;
    fibarr[1]=1;
    for(int i=2; i<=n+2; i++)
    {
        fibarr[i]=(fibarr[i-1]%10 + fibarr[i-2]%10)%10;
    }
    // for(int i=2; i<n+2; i++)
    // cout<<fibarr[i]-1<<" ";
    // cout<<endl;`
    //returning the last digit of Sum of N fibonacci numbers
    if (fibarr[n+2]==0)
    return 9;
    else 
    return (fibarr[n+2]-1);
}

int main()
{
    long long n;
    cin>>n;
    cout<<fibonacciSum(n);
    return 0;
}