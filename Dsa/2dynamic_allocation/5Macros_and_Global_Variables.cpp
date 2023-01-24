#include<iostream>//preprosser directive
using namespace std;
#define PI 3.14
int main()
{
    int r;
    cin>>r;
    cout<<PI*r*r<<endl;
    return 0;
}


// // m2
// // global variables
// #include<iostream>
// using namespace std;
// int a;
// void g()
// {
//     a++;
//     cout<<a<<endl;
// }
// void f()
// {
//     cout<<a<<endl;
//     a++;
//     g();
// }
// int main()
// {
//     a=10;
//     f();
//     cout<<a<<endl;
//     return 0;
// }