#include<iostream>
using namespace std;

int changeRecursive(int money, int coins[], int n){
    if(money==0)
        return 0;
    int minNumcoins=1000000000;
    for(int i=0; i<n; i++) {
        if(money>=coins[i]) {
            int numCoins = changeRecursive(money-coins[i], coins, n);
            if(numCoins+1<minNumcoins)
                minNumcoins=numCoins+1;
        }
    }
    return minNumcoins;
}

int main()
{
    int n;//number of denomination
    cin>>n;
    int coins[n];
    for(int i=0; i<n; i++)
        cin>>coins[i];
    int money;
    cin>>money;
    cout<<changeRecursive(money,coins,n);
}