#include <iostream>
using namespace std;

int change(int n)
{   
    int coins=0;
    while (n>0)
    {
        if (n>=10)
        n=n-10;
        else if (n>=5)
        n=n-5;
        else
        n=n-1;
        coins = coins + 1;
    }
    return coins;
}

int main()
{
    int n;
    cin>>n;
    cout<<change(n);
    // cout<<endl;
    // cout<<(n/10)+((n%10)/5)+((n%10)%5);
    return 0;
}