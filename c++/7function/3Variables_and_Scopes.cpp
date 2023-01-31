#include<iostream>
using namespace std;
int fact(int n)
{
    int ans =1;
    // cout<<a<<endl; // this variable is local to function main
    for(int i=1;i<=n;i++)
    {
        ans =ans*i;
    }
    return ans;
}
int main()
{
    int a;
    cin>>a;
    int output=fact(a);
    // cout<<ans<<endl; // this can't be used here because ans is out of scope of function "fact" here.
    // cout<<n<<endl; // this also can't be used here because scope of n is only in the function fact
    cout<<output<<endl;
    return 0;
}