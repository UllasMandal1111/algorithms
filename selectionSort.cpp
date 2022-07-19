#include<iostream>
#include<vector>
using namespace std;

void input(vector<int> &arr, int n) //function to take input
{
    int temp;
    for(int i=0; i<n; i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }
}

void output(vector<int> &arr, int n) //function to take output
{
    for(const int& i : arr)
        cout<<i<<"\t";
}

void swap(vector<int> &arr, int i, int pos) //function to swap numbers
{
    int temp=arr[i];
    arr[i]=arr[pos];
    arr[pos]=temp;
}

void selectionSort(vector <int> &arr, int n) //selection sort function
{
    for(int i=0; i<n; i++)
    {
        int posmin=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[posmin])
            posmin=j;
        }
        swap(arr,i,posmin);
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    input(arr,n);
    selectionSort(arr,n);
    output(arr,n);
    return 0;
}