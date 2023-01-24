//M1
// #include<iostream>
// using namespace std;
// int max(int a,int b)
// {
//     return (a>b)?a:b;
// }
// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     //method 1
//     // int c;
//     // if(a>b)
//     // {
//     //     c=a;
//     // }
//     // else
//     // {
//     //     c=b;
//     // }

//     //method2
//     // int c=(a>b)?(a):(b);
    

//     //method 3
//     int x=12;
//     int y=34;
//     int z=max(x,y);

//     //method 3
//     int c= max(a,b);

//     return 0;
// }

// // here using method 2 it causes the poor redability(code ganda) and using method 3 it causes the performance hit


// //M2
// #include<iostream>
// using namespace std;
// inline int max(int x,int y)//here inline will replace the fuction call by its body it will improve the performace and redability
// {
//     return (x>y)?x:y;
// }
// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     int c=max(a,b);

//     int x,y;
//     x=12;
//     y=34;
//     int z=max(x,y);
//     return 0;
// }


// //M3
// //default arguments
// #include<iostream>
// using namespace std;
// int sum(int a[],int size,int si=0)//here default value of si is 0 if you not give the value of si then it will assume its defult value
// //default values are always given to rightmost variables
// {
//     int ans =0;
//     for(int i=si;i<size;i++)
//     {
//         ans +=a[i];
//     }
//     return ans;
// }
// int sum2(int a,int b=0,int c=0,int d=0)
// {
//     return a+b+c+d;
// }
// int main()
// {
//     int arr[20];
//     for(int i=0;i<20;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<sum(a,20)<<endl;
//     return 0;
// }