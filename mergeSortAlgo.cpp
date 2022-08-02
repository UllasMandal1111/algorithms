#include<iostream>
using namespace std;
void merge(long arr[], int l, int m, int r)
{
    //finding the length of the subarrays
    int n1=m-l+1;
    int n2=r-m;
    long A[n1];
    long B[n2];
    //copy array procedure
    for(int i=0; i<n1; i++)
        A[i]=arr[l+i];
    for(int i=0; i<n2; i++)
        B[i]=arr[m+1+i];
    //mergesort subarrays procedure
    int i=0, j=0, pos=l; //counters for helping merge
    while(i<n1 && j<n2)
    {
        if(A[i]<B[j]) {
            arr[pos]=A[i];
            i++; pos++;
        }
        else {
            arr[pos]=B[j];
            j++; pos++;
        }
    }
    while(i<n1) {
        arr[pos]=A[i];
            i++; pos++;
    }
    while(j<n2) {
        arr[pos]=B[j];
            j++; pos++;
    }
}
void mergesort(long arr[], int l, int r)
{
    if(l>=r)
        return;
    int m=l+(r-l)/2;
    mergesort(arr, l, m);
    mergesort(arr, m+1, r);
    merge(arr, l, m, r);

}
int main()
{
int n; 
cin>>n;
long arr[n];
for(int i=0; i<n; i++)
    cin>>arr[i];
mergesort(arr,0,n-1);
for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
return 0;
}