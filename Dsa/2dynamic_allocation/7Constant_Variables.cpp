#include<iostream>
using namespace std;
int main()
{
    //const int
    const int i=10;//const variable have to be intialized at the time of declaration
    //i=12; constant variable cannot be changed
    int const i2=19;// other way of writing



    //constant reference from a non const int
    int j=12;
    const int &k=j;
    //k++; here path is const not the storage
    j++;
    cout<<k<<endl;

    // const reference from a const int
    int const j2=12;
    int const &k2=j2;
    // j2++;
    // k2++; both are not valid because both path are const 


    //reference from a const int
    int const j3=123;
    // int &k3 = j3; this is wrong because j3 is const how it can allow a way through which it can be changed


    return 0;
}

//M2
// // const pointers
// #include<iostream>
// using namespace std;
// int main()
// {
//     int const i=10;
//     // int *p= &i; this is wrong because i is const pointer hast to clarify before that it will not the value
//     int const *p =&i;

//     int j=12;
//     int const *p2=&j;//this is right
//     cout<<*p2<<endl;
//     j++;
//     cout<<*p2<<endl;
//     return 0;
// }

//M3
// #include<iostream>
// using namespace std;

// // void f(const int *p)
// // {
// //     (*p)++;   this is wrong because const will not allow it to change the variable
// // }

// // void g(int const &a)
// // {
// //     a++; value cannot be changed because it is const
// // }
// int main()
// {
//     int j=12;
//     int *p3=&j;
//     f(p3);
//     g(j);
//     return 0;
// }


//M4
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=10;
//     int j=21;
//     int const *p=&i;
//     p= &j;// here p is not but the variable which it is pointing that is const int type and that is not changable
//     // (*p)++; here it is not allowed

//     int * const p2= &i;// here p2 is const
//     (*p2)++;//it is allowed here 
//     // p2=&j; this is not allowed because p2 is const


//     int const *const p3 = &i;// p3 is const pointer to const int
//     // p3=&j;
//     // (*p)++; both are invalid
//     return 0;
// }