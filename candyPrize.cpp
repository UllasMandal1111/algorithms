#include<iostream>
#include<vector>
using namespace std;

void giveCandy(long n)
{
    long k=1;
    vector <long> spent;
    spent.push_back(1);
    long long sum=1;
    //long currprize=1;

    while((n-sum)>k)
    {
        k++;
        spent.push_back(k);
        sum+=k;
    }
    cout<<k<<endl;
    spent[k-1]=k+(n-sum);
    // long s=sizeof(spent)/sizeof(long);
    // cout<<sizeof(spent)<<'\t'<<sizeof(long)<<endl;
    // cout<<"s="<<s<<endl;
    for(long i=0; i<k; i++)
    {
        cout<<spent[i]<<' ';
    }
}

int main()
{
    long n;
    cin>>n;
    giveCandy(n);
}