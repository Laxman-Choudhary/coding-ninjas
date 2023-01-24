// m1
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=10;
//     int j=i;
//     i++;
//     cout<<j<<endl;
//     return 0;
// }

// m2
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=10;
//     int &j=i;// here j is reference variable 
//     i++;
//     cout<<j<<endl;
//     j++;
//     cout<<i<<endl;
//     int k=100;
//     j=k;
//     cout<<i<<endl;//here both i and j are same.
//     cout<<j<<endl;
//     return 0;
// }

// m3
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i;
//     i=10;  //this is only applicable with int not with reference variables because firstly you are are saying to compiler that not allocate the memory i will tell you but but in following line you are not allocating the location so this will give the error 
//     // int &j;    
//     // j=i;
//     //reference variable must be intialized while declaring
//     int &j=i;
//     i++;
//     cout<<j<<endl;
//     j++;
//     cout<<i<<endl;
//     int k=100;
//     j=k;
//     cout<<i<<endl;//here both i and j are same.
//     cout<<j<<endl;
//     return 0;
// }

//m4
// #include<iostream>
// using namespace std;
// void increment(int& n)
// {
//     n++;
// }
// int main()
// {
//     int i;
//     i=10;
//     increment(i);
//     cout<<i<<endl;
//     return 0;
// }

// m5
// #include<iostream>
// using namespace std;
// //bad practise
// int& f(int n)
// {
//     int a=n;// here a is local variable
//     return a;
// }
// //bad practise
// int *f2()
// {
//     int i=10;// here i also is local variable
//     return &i;
// }
// //instead above two declare both variable as global variable
// int main()
// {
//     int *p=f2();
//     int i;
//     i=10;
//     int&k = f(i);
//     cout<<k<<endl;
//     return 0;
// }

