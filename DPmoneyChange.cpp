#include<iostream>
using namespace std;

int DPChange(int money, int coins[], int n)
{
    int mincoins[money+1];
    mincoins[0]=0;
    for(int m=1; m<=money; m++){
        mincoins[m]=1000000000;
        // cout<<"mincoins[m]="<<mincoins[m]<<endl;
        for(int i=0; i<n; i++){
            if(m>=coins[i]){
                int numcoins=mincoins[m-coins[i]]+1;
                // cout<<"numcoins="<<numcoins<<endl;
                if(numcoins<mincoins[m])
                mincoins[m]=numcoins;
                // cout<<"mincoins[m] in loop="<<mincoins[m]<<endl;
            }
        }
    }
    return mincoins[money];
}

int main()
{
    // int n;  //number of coins
    // cin>>n;

    int coins[3]={1,3,4};

    //loop to change coin denominations
    // for(int i=0; i<n; i++)
    //     cin>>coins[i];
    int money;
    cin>>money;
    cout<<DPChange(money, coins, 3);
}