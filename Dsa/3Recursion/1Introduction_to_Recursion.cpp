#include<iostream>
using namespace std;
int factorial(int n)
{
    int smalloutput=factorial(n-1);
    return n*smalloutput;
}
int main()
{
    int n;
    cin>>n;
    int output = factorial(n);
    cout<<output<<endl;
    return 0;
}