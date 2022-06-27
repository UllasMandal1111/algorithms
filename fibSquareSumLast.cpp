#include <iostream>
#include <cassert>

long long fibonacci_Last(int n) {
    // write your code here
    long long fibarr [n+2]; //array to store last digits of fibonacci number
    fibarr[0]=0;
    fibarr[1]=1;
    int sum=0;
    if(n==0)
    return fibarr[0];
    else if (n==1)
    return fibarr[1];
    for(int i=2; i<=n+1; i++){
        sum=(fibarr[i-1]%10)+(fibarr[i-2]%10);
        fibarr[i]=sum%10;
    }
    // for(int j=0; j<=n; j++)
    // {
    //     std::cout<<fibarr[j]<<' ';
    // }
    // std::cout<<'\n';
    int sqlast=(fibarr[n]*fibarr[n+1])%10;
    return sqlast;
}

long long fibSquareSlow(long long n)
{
    long long fibarr [n+2]; //array to store last digits of fibonacci number
    fibarr[0]=0;
    fibarr[1]=1;
    int sum=0;
    if(n==0)
    return fibarr[0];
    else if (n==1)
    return fibarr[1];
    for(int i=2; i<=n+1; i++){
        sum=(fibarr[i-1]%10)+(fibarr[i-2]%10);
        fibarr[i]=sum%10;
    }
    long long sqSum=0;
    for(int i=0; i<=n; i++)
    {
        sqSum=sqSum+(fibarr[i]*fibarr[i]);
    }
    return sqSum%10;
}

int main() {
    int n = 0;
    std::cin >> n;

    //stress test begins
    // while (true)
    // {
    //     int k = rand()%100000 + 1000000;
    //     std::cout<<k<<'\n';
    //     if(fibonacci_Last(k)!= fibSquareSlow(k))
    //     {
    //         std::cout<<"Wrong answer " << fibonacci_Last(k)<<"\t"<<fibSquareSlow(k);
    //         break;
    //     }
    //     else
    //     std::cout<<"OK"<<"\n";
    // }
    //stress test ends
    
    std::cout << fibonacci_Last(n);
    return 0;
}