/* WRONG 
    CODE 
    NOT 
    WORKING */

#include <iostream>
using namespace std;

void merge(long long A[], long long B[], long long C[]){
    int a=sizeof(A)/sizeof(A[0]);
    int b=sizeof(B)/sizeof(B[0]);
    int p=0, q=0, i=0;
    while(a<=b){
        if(A[p]<=B[q]){
            C[i]=A[p];
            i++;
            p++;
        }
        else {
            C[i]=B[q];
            i++;
            q++;
        }
    }
    while(q!=b) {
        C[i]==B[q];
        q++;
    }
}

void mergeSort(long long int arr[], int size, long long int C[]){
    if (size==1)
        C[0]=arr[0];
    long long A[size/2], B[size-size/2];
    mergeSort(arr, size/2, A);
    mergeSort(arr, size-size/2, B);
    merge(A, B, C);
}

int main()
{
    int n;
    cin>>n;
    long long int arr[n], C[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    mergeSort(arr, n, C);
    for(int i=0; i<n; i++)
        cout<<" ";
}