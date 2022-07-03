#include <iostream>
using namespace std;

void input(int n, int stops[])
{
    for(int i=0; i<n; i++)
        cin>>stops[i];
}

int countRefuel(int n, int m, int stops[])
{   
    int currpos=0;
    int refuel=0;
    for(int i=0; i<=n; i++)
    {
        int diff=stops[i]-currpos;
        // cout<<"stop="<<stops[i]<<"   currentpos="<<currpos<<"   diff=" <<diff<<endl;
        if(diff<m)
            continue;
        else if(diff==m)
        {
            currpos=stops[i];
            refuel++;
            // cout<<"update"<<currpos<<'\t'<<refuel<<'\n';
        }
        else if(diff>m)
        {
            if((stops[i]-stops[i-1])>m)
                {//cout<<stops[i-1]<<'\t'; 
                return -1;}
            else
            {
                currpos=stops[i-1];
                refuel++;
                i=i-1;
                // cout<<"update"<<currpos<<'\t'<<refuel<<'\t'<<i<<'\n';
            }
        }
    }
    return refuel;
}

int main()
{
    int d,m,n;
    cin>>d>>m>>n;
    int stops[n+1];
    input(n,stops);
    stops[n]=d; //adding last stop as destination to stops array
    cout<<countRefuel(n,m,stops);
}