// #include<iostream>
// using namespace std;
// int factorial(int n)
// {
//     cout<<n<<endl;
//     int smalloutput=factorial(n-1);// this will infinitely
//     return n*smalloutput;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int output=factorial(n);
//     cout<<output<<endl;
//     return 0;
// }

//after using the base condition
 #include<iostream>
using namespace std;
int factorial(int n)
{
    cout<<n<<endl;
    if(n==0)
    return 1;
    int smalloutput=factorial(n-1);// this will infinitely
    return n*smalloutput;
}
int main()
{
    int n;
    cin>>n;
    int output=factorial(n);
    cout<<output<<endl;
    return 0;
}