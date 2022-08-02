#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int prev1,prev2,current;
    prev2=0;
    prev1=1;
    for(int i=2; i<=n; i++) {
        current=prev1+prev2;
        prev2=prev1;
        prev1=current;
    }
    cout<<current;
}