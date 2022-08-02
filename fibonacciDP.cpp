#include<iostream>
#include<map>
#include<string>
using namespace std;

long long fibonacciDynamic(int n, map<long, long long> &arr)
{
        if(n<=1)
            arr[n]=n;
        else {
            if (arr[n]==0)
                arr[n]= fibonacciDynamic(n-1, arr) + fibonacciDynamic(n-2, arr);
        }

    // cout<<arr[n]<<'\t';
    return arr[n];
}
int main()
{
    int n; 
    cin>>n;
    map<long, long long> arr;
    cout<<endl<<fibonacciDynamic(n, arr);
}