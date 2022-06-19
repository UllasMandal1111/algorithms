#include<iostream>
using namespace std;

void reverse(int arr[], int start, int end)
{
    if (start>=end)
    return;

    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;

    reverse(arr, ++start, --end);
}

int main()
{
    int n;
    // int size=sizeof(arr)/sizeof(arr[0]);
    // cout<<size;
    // cout<<"enter n";
    cin>>n;
    int arr[n];
    // cout<<"enter the array";
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }   
    int temp;

    //reversing the array using loop
    // for(int i=0; i<n/2; i++)
    // {
    //     temp=arr[i];
    //     arr[i]=arr[n-(i+1)];
    //     arr[n-(i+1)]=temp;
    //     // cout<<n<<" ";
    // }

    //reversing the array using recursion
    int start=0, end=n-1;
    reverse(arr, start, end);
    
    // cout<<n<<endl;
    //printing the reversed array
    // cout<<"the reversed array is : ";
    for (int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }   
    return 0;
}







//using while loop -- turned out wrong
// void reverse(int arr[], int start, int end)
// {
//     cout<<start<<" "<<end<<"    ";
//     if(start>=end)
//     return;
//     while(start<end)
//     {
//         int temp=arr[start];
//         arr[start]=arr[end];
//         arr[end]=temp;
//          ++start;
//          --end;
//          cout<<start<<" "<<end<<endl;
//         reverse(arr, start, end);
//     }
// }