#include<iostream>
using namespace std;

int binarySearch(long long arr[], int low, int high, long long key)
{
    while(low<=high)
    {
        int mid=low+((high-low)/2);
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]<key)
            binarySearch(arr, (mid+1), high, key);
        else if(arr[mid]>key)
            binarySearch(arr, low, (mid-1), key);
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

int main()
{
    int n=5;
    long long arr[5]={1, 2, 3 , 4 , 5};
    int k=2; 
    long long keys[2]={2,3};
    int position[k];

    search(arr,n,keys,k,position);
    for(int i=0; i<k; i++)
    {
        cout<<position[i]<<'\t';
    }
}