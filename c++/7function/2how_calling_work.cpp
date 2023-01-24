// #include<iostream>
// using namespace std;
// bool isprime(int n)
// {
//     int d=2;
//     while(d<n)
//     {
//         if(n%d==0)
//         {
//             return false;
//         }
//         d++;
//     }
//     return true;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=2;i<=n;i++)
//     {
//         if(isprime(i))
//         {
//             cout<<i<<" ";
//         }
//     }
//     return 0;
// }

//M2
// how function stack works
#include<iostream>
using namespace std;
void B()
{
    cout<<5<<endl;
}
void A(int a)
{
    cout<<1<<endl;
    B();
    cout<<2<<endl;
}
int main()
{
    int n;
    cout<<3<<endl;
    A(n);
    cout<<n<<endl;//value of n is still saved
    cout<<4<<endl;
    return 0;
}