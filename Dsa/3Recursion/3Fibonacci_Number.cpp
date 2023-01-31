// #include<iostream>
// using namespace std;
// int fib(int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }      // here two base condition will be required
//     int smalloutput1=fib(n-1);
//     int samlloutput2=fib(n-2);
//     return smalloutput1+samlloutput2;
// }
// int main()
// {
//     cout<<fib(6)<<endl;
//     return 0;
// }



#include<iostream>
using namespace std;
int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    int smalloutput1=fib(n-1);
    int samlloutput2=fib(n-2);
    return smalloutput1+samlloutput2;
}
int main()
{
    cout<<fib(6)<<endl;
    return 0;
}