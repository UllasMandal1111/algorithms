#include<bits/stdc++.h>
using namespace std;

void bubblesort(int arr[], int n){
    for(int i=0; i<n; i++) {
        int pos=0;
        for(int j=n-1; j>i; j--) {
            if(arr[pos]>arr[pos+1])
                swap(arr[pos], arr[pos+1]);
                pos++;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    bubblesort(arr,n);
    for(int i=0; i<n; i++)
        cout<<arr[i]<<' ';
}