#include<iostream>
using namespace std;

int fibRemainder(long long n, int m)
{
    int fibRem[n+1];
    fibRem[0]=0;
    fibRem[1]=1;
    int period=0;
    for(int i=2; i<=n; i++)
    {
        int res;
        res=(fibRem[i-1]%m) + (fibRem[i-2]%m);
        fibRem[i]=res%m;
        period++;
        cout<<period<<" ";
        if(fibRem[i]==1 && fibRem[i-1]==0)
        break;
    }
    cout<<endl;
    for(int j=0; j<period; j++)
    cout<<fibRem[j];
    cout<<endl<<period<<endl;
    int k=n%period;
    return fibRem[k];
}

int main()
{
    long long n,m;
    cin>>n>>m;
    cout<<fibRemainder(n,m);
    return 0;
}

