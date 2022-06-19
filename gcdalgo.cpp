#include<iostream>
using namespace std;
// long long int gcdrecursive(long long int, long long int);
long long int gcdrecursive(long long int a, long long int b,long int n)
{
    //using Euclid's lemma
    long long int a1;
    if (b==0)
    {
        cout<<n<<" recursive steps" <<endl;
        return a;
    }
    else
    {
        n++;
        a1=a%b;
        gcdrecursive(b,a1,n);
    }
    
}
int main()
{
    long long int a,b,c;
    cin>>a>>b;
    long int n=0;
    c=gcdrecursive(a,b,n);
    cout<<c;
    return 0;
    
}

