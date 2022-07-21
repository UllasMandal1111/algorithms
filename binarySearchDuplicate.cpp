#include <iostream>
using namespace std;

void input(long long arr[],int n)
{
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
}

int binarySearch(long long arr[], int low, int high, long long key) //recursive binary search function
{
    if(low<=high)
    {
        int mid=low+((high-low)/2);
        if(arr[mid]==key)
            {
               int t = mid;
            //    cout<<"t for "<<arr[t]<<"="<<t<<endl;
               while(mid!=0)
               {
                    // cout<<"arr[t-1] = "<<arr[t-1]<<endl;
                    if (arr[t-1]==arr[t]){
                        // cout<<"here for "<<arr[t]<<endl;
                        t-=1;}
                    else
                        break;
               }
               return t;
            }
        else if(arr[mid]<key)
            return binarySearch(arr, (mid+1), high, key);
        else if(arr[mid]>key)
            return binarySearch(arr, low, (mid-1), key);
    }
    return -1;
}

void search(long long arr[], int n, long long keys[], int k, int position[])
{
    for (int i=0; i<k; i++)
    {
        int result=binarySearch(arr, 0, (n-1), keys[i]);
        position[i]=result;
    }
}

void output(int position[], int k)
{
    for(int i=0; i<k; i++)
        cout<<position[i]<<" ";
}

void initialize(int arr[], int k)
{
    for(int i=0; i<k; i++)
        arr[i]=-1;
}

int main()
{
    int n;
    cin>>n;
    long long arr[n];
    input(arr,n);
    // cout<<arr[-1];
    int k;
    cin>>k;
    long long keys[k];
    input(keys,k);
    int position[k];
    search(arr, n, keys, k, position);
    // initialize(position,k);
    // output(position,k);
    // binarySearch(arr,n,keys,k,position);
    output(position,k);
    return 0;
}

