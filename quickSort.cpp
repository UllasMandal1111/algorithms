#include<iostream>
using namespace std;

void input(long long arr[],int n)
{
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
}

void swap(long long arr[], int i, int j)
{
    long long temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int partition(long long arr[], int l, int r )
{
    long long pivot=arr[l]; //pivot element 
    int j=l; //marks upto where pivot element can be placed
    for(int i=l+1; i<=r; i++) //make note of loop condition
    {
        if(arr[i]<pivot)
           { j=j+1;
             swap(arr,j,i);}
    }
    swap(arr,l,j);
    return j;
}

void quicksort(long long arr[], int l, int r)
{
    if(l>=r)
    return;
    int m=partition(arr,l,r);
    quicksort(arr,l,m-1);
    quicksort(arr,m+1,r);
}

void output(long long arr[], int n)
{
    for(int i=0; i<n; i++)
        std::cout<<arr[i]<<" ";
}

int main()
{
    int n;
    cin>>n;
    long long arr[n];
    input(arr,n);
    quicksort(arr,0,n-1);
    output(arr,n);

}