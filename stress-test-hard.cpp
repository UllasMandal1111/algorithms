//maximum pairwise product
#include <iostream>
#include <vector>
using namespace std;
long long maxpairwiseproduct(const vector<int> & numbers) //passing vector by reference to make changes in the original vector
{
    long long result = 0;
    int n = numbers.size(); //calculating size of vector
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
    result=((long long)numbers[maxindex1])*numbers[maxindex2];
    return result;
}

int main()
{   
    
    //Stress test begins here
    /* while (true)
    {
        int n = rand() % 1000 + 2;
        cout << n <<"\n";
        vector <int> a;
        for (int i=0; i<n; ++i)
        {
            a.push_back(rand() % 100000); 
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
    } */

    //Code to output the value of maximum pair wise product using functions
    int n;
    // cout<<"enter the value of n : \n";
    cin>>n;
    vector<int> numbers(n);       
    // cout<<"enter " << n <<" numbers \n";
    for (int i=0; i<n; ++i)
    {
        cin>>numbers[i];
    }
    

    // result = maxpairwiseproduct(numbers);
    // cout<<result<<"\n";

    long long result = maxpairwiseproductfast(numbers);
    cout<<result<<"\n";

    return 0;
}