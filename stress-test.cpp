//maximum pairwise product
#include <iostream>
#include <vector>
using namespace std;
long long maxpairwiseproduct(const vector<int> & numbers)
{
    long long result = 0;
    int n = numbers.size();
    for (int i =0; i<n; ++i)
    {
        for (int j=i+1; j<n; ++j)
        {
            if (((long long)numbers[i])*numbers[j]>result)
            {
                result = ((long long)numbers[i])*numbers[j];
            }            
        }
    }
    return result;
}

long long maxpairwiseproductfast(const vector<int> &numbers)
{
    long long result = 0;
    int n = numbers.size();
    int maxindex1 = -1, maxindex2 = -1;
    for (int i=0; i<n; ++i)
    {
        if (maxindex1==-1 || (numbers[i]>numbers[maxindex1]))
        maxindex1=i;
    }
    for (int j=0; j<n; ++j)
    {
        if((j!= maxindex1) && (maxindex2==-1 || (numbers[j]>numbers[maxindex2])))
        maxindex2=j;
    }
    result=numbers[maxindex1]*numbers[maxindex2];
    return result;
}

int main()
{   
    //Code to output the value of maximum pair wise product using functions
    
    // int n;
    // cout<<"enter the value of n : \n";
    // cin>>n;
    // vector<int> numbers(n);       
    // cout<<"enter " << n <<" numbers \n";
    // for (int i=0; i<n; ++i)
    // {
    //     cin>>numbers[i];
    // }
    // long long result = maxpairwiseproduct(numbers);
    // cout<<result<<"\n";
    // result = maxpairwiseproductfast(numbers);
    // cout<<result<<"\n";

    //Stress test begins here
    while (true)
    {
        int n = rand() % 10 + 2;
        cout << n <<"\n";
        vector <int> a;
        for (int i=0; i<n; ++i)
        {
            a.push_back(rand() % 100); 
        }
        for (int i=0; i<n; ++i)
        {
            cout<<a[i] << ' ';
        }
        cout<<"\n";
        long long res1=maxpairwiseproduct(a);
        long long res2=maxpairwiseproductfast(a);
        
        if (maxpairwiseproduct(a)!=maxpairwiseproductfast(a))   
        {
            cout << "wrong answer " << res1 << " " << res2;
            break;
        }
        else
        cout<<"OK \n";        
    }


    return 0;
}