//M1
// without using the function
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,r;
//     cin>>n>>r;
//     int fact_n=1;
//     int i=1;
//     while(i<=n)
//     {
//         fact_n=fact_n*i;
//         i++;
//     }

//     int fact_r=1;
//     i=1;
//     while(i<=r)
//     {
//         fact_r=fact_r*i;
//         r++;
//     }

//     int fact_n_r_1=1;
//     i=1;
//     while(i<=n-r)
//     {
//         fact_n_r_1=fact_n_r_1*i;
//         i++;
//     }

//     cout<<fact_n/(fact_r*fact_n_r_1)<<endl;

//     return 0;
// }


//M2
//using the function
// #include<iostream>
// using namespace std;
// int factorial(int n)
// {
//     int ans =1;
//     int i=1;
//     while(i<=n)
//     {
//         ans*=i;
//         i++;
//     }
//     return ans;
// }
// int main()
// {
//     int n,r;
//     cin>>n>>r;
//     // int output=factorial(5);
//     // cout<<output<<endl;
//     // cout<<factorial(5)<<endl; //alternative method


//     int fact_n=factorial(n);
//     int fact_r=factorial(r);
//     int fact_n_r=factorial(n-r);
//     int ans=fact_n/(fact_r*fact_n_r);
//     cout<<ans<<endl;


//     return 0;
// }


//M3
//function for checking prime or not
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
//     bool ans = isprime(31);
//     cout<<ans<<endl;
//     ans = isprime(35);
//     cout<<ans<<endl;
//     return 0;
// }


//M4
// printing from 1 to n
// #include<iostream>
// using namespace std;
// void print_1_n(int n)
// {
//     for(int i=1;i<=n;i++)
//     {
//         cout<<i<<endl;
//     }
// }
// int main()
// {
//     print_1_n(10);

//     return 0;
// }

//M5
#include<iostream>
using namespace std;
int multiply(int a,int b)
{
    return a*b;
}
int main()
{
    int ans = multiply(2,3);
    cout<<ans<<endl;
    return 0;
}