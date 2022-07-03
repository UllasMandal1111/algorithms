#include <iostream>
#include <iomanip>
using namespace std;

//cout<<fixed<<setprecision(4);

struct item //structure to hold item details
{
    int value;
    int weight;
    double itemvalue=0;
};

void input(int n, item thing[]) //funtion to take inputs and calculate itemvalue of each thing
{
    for (int i=0; i<n; i++)
    {
        cin>>thing[i].value;
        cin>>thing[i].weight;
        thing[i].itemvalue=(double)thing[i].value/thing[i].weight;
    }
}

void selectionsort (int n, item thing[])
{
    for (int i=0; i<n-1; i++)
    {   
        int max=i;
        for(int j=i+1; j<n; j++)
        {
            if (thing[j].itemvalue>thing[max].itemvalue)
            max=j;
        }
        item temp;
        temp=thing[i];
        thing[i]=thing[max];
        thing[max]=temp;
    }
}

//output function for debugging sorted array of structure
// void output(int n, item thing[])
// {
//     for(int i=0; i<n; i++)
//         cout<<thing[i].value<<'\t'<<thing[i].weight<<'\t'<<thing[i].itemvalue<<'\n';
// }

double lootmax(int n, int capacityLeft, item thing[], double finalvalue)
{   
    for(int i=0; i<n; i++)
    {
        if ((capacityLeft>0) && (thing[i].weight<=capacityLeft))
        {
            finalvalue+=thing[i].value;
            capacityLeft-=thing[i].weight;
            continue;
        }
        else if ((capacityLeft>0) && (thing[i].weight>capacityLeft))
        {
            finalvalue+=(capacityLeft*thing[i].itemvalue);
            capacityLeft=0;
            break;
        }
    }
    return finalvalue;

}

int main()
{
    int n,W;
    cin>>n>>W;
    struct item thing[n];
    input(n,thing);
    selectionsort(n,thing);
    // output(n,thing);
    cout<<fixed<<setprecision(4);
    double finalvalue=0.0;
    int capacityLeft=W;
    cout<<lootmax(n,capacityLeft,thing,finalvalue);
    

}