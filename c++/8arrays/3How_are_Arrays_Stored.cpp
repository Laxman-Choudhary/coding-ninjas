#include<iostream>
using namespace std;
// void printarray(int input[])
// {
//     cout<<"function :"<<sizeof(input)<<endl; //  8 bytes we cannot find the size through only input so we always have to send the size of an array.
// }


void printarray(int input[],int n)
{
    cout<<"print: ";
    for(int i=0;i<n;i++)
    {
        cout<<input[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;
    int input[100];
    cout<<"enter array elements : ";
    cout<<input<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>input[i];
    }
    // cout<<"main:"<<sizeof(input)<<endl;  // 400 bytes
    printarray(input,n);
    return 0;
}