#include<iostream>
using namespace std;

int fibRemainder(long long n, int m, int k)
{
    int fibRem[n+1];
    fibRem[0]=0;
    fibRem[1]=1;
    int period=0;
    for(int i=2; i<=n; i++)
    {
        int res;
        res=(fibRem[i-1]%k) + (fibRem[i-2]%k);
        fibRem[i]=res%k;
        period++;
        cout<<period<<" ";
        if((fibRem[i]%m)==1 && (fibRem[i-1]%m)==0)
        break;
    }
    cout<<endl;
    for(int j=0; j<period; j++)
    cout<<fibRem[j];
    cout<<endl<<period<<endl;
    int pos=n%period;
    cout<<fibRem[pos]<<endl;
    return fibRem[pos]%m;
}

int main()
{
    long long n,m;
    cin>>n>>m;
    int k;
    if(m<=10)
    k=10;
    else if (m>10 && m<=100)
    k=100;
    else if (m>100 && m<=1000)
    k=1000;
    cout<<fibRemainder(n,m,k);
    return 0;
}

