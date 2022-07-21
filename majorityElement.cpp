#include<iostream>
#include<vector>
using namespace std;

void input(long long arr[],int n)
{
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
}

int majority(long long arr[], int n)
{
    vector <int> freq;
    for(int i=0;)
}

int main()
{
    int n;
    cin>>n;
    long long arr[n];
    input(arr,n);
    cout<<majority(arr,n);
}