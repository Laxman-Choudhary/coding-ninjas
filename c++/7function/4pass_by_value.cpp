// #include<iostream>
// using namespace std;
// void increment(int a)
// {
//     a=a+1;
// }
// int main()
// {
//     int n=10;
//     increment(n);
//     cout<<n<<endl;// this will not change the value of n
//     return 0;
// }


//M2
// #include<iostream>
// using namespace std;
// int increment(int a)
// {
//     a=a+1;
//     return a;
// }
// int main()
// {
//     int n=10;
//     n=increment(n);// this will change the value of n
//     cout<<n<<endl;
//     return 0;
// }

//M3
#include<iostream>
using namespace std;
int increment(int a)
{
    a=a+1;
    return a;
}
int main()
{
    int a=10;
    a=increment(a);// this will change the value of n
    cout<<a<<endl;
    return 0;
}
