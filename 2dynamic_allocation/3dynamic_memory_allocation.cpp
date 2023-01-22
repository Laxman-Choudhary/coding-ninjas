//m1
// #include<iostream>
// using namespace std;
// int main()
// {
//     int *p = new int;
//     *p = 10;
//     cout<<*p<<endl;

//     double *pd = new double;
//     char *c= new char;

//     int *pa= new int[50];

//     int n;
//     cout<<"enter number of elements"<<endl;
//     cin>>n;

//     int *pa2= new int[n];
//     // pa2[0]=10;      //*(pa2+0)
//     for(int i=0;i<n;i++)
//     {
//         cin>>pa2[i];
//     }
//     int max=-1;
//     for(int i=0;i<n;i++)
//     {
//         if(max<pa2[i])
//         {
//             max=pa2[i];
//         }
//     }
//     cout<<max<<endl;
//     return 0;
// }

//m2
#include<iostream>
using namespace std;
int main()
{
    while(true)
    {
        int i=10;
    }
    while(true)
    {
        int *p=new int;
    }

    int *p=new int;
    delete(p);// here memory in heap is deleted not the pointer which will be deleted on the ending of scope

    p=new int;
    delete p;

    // incase of array for deleting
    p=new int[100];
    delete []p;//array deletion


    return 0;
}