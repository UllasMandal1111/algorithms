#include<iostream>
using namespace std;

long calculate(long n, long steps[]) {
   for(int i=2; i<=n; i++) {
      long min = steps[i-2];
      if (i%3==0 && steps[i/3 - 1]<min)
         min=steps[i/3 -1];
      else if (i%2==0 && steps[i/2 - 1]<min)
         min=steps[i/2 -1];
      
      steps[i-1]=min+1;
   }
   return steps[n-1];
}

int main()
{
   long n;
   cin>>n;
   long steps[n]={0};
   cout<<calculate(n, steps);
   //loop to operate primitive calulator 
   // for(int i=1; i<=n; i++)
   //    cout<<i<<" : "<<calculate(i, steps)<<'\n';
   return 0;
}