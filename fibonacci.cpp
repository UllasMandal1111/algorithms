#include<iostream>
using namespace std;
int fibrec(int n)
    {
        if(n-1<=1)
        return n-1;
        else
        return fibrec(n-1) + fibrec(n-2);
    }
int main()
{
    int n;
    cin>>n;
    cout<<fibrec(n)<<endl;
    return 0;
}


//Fibonacci Series using Recursion
// #include<bits/stdc++.h>
// using namespace std;

// int fib(int n)
// {
// 	if (n <= 1)
// 		return n;
// 	return fib(n-1) + fib(n-2);
// }

// int main ()
// {
// 	int n = 43;
// 	cout << fib(n);
// 	getchar();
// 	return 0;
// }

// This code is contributed
// by Akanksha Rai
