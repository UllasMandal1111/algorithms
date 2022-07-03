#include <iostream>
#include <iomanip>
using namespace std;

void change(float d, int i, int j)
{
    cout<<fixed<<setprecision(6);
    d=124;
    cout<<d<<'\n';
    float k=(float)j/i;
    cout<<k<<endl;
}
//cout<<fixed<<setprecision(4);
int main()
{
    cout<<fixed<<setprecision(6);
    float d=0.0;
    int i=9, j=82965;
    change(d,i,j);
    cout<<d;
}