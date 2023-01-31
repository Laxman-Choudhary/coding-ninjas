#include<iostream>
#include<climits>
using namespace std;
int main()
{
    // take array input from user
    int n;
    cin>>n;
    // int input[n]; we never take variable size of an array

    int input[100];
    //taking the input
    for(int i=0;i<n;i++)
    {
        cin>>input[i];
    }
    // printing the output
    for(int i=0;i<n;i++)
    {
        cout<<input[i];
    }



    // // largest element in the array
    // int max = input[0];// this will not run when n=0 becuase input[0] will not be possible when n is 0; so we will intialize the max with 0
    // for(int i=1;i<n;i++) 
    // {
    //     if(input[i]>max)
    //     {
    //         max = input[i];
    //     }
    // }
    // cout<<"Max : " <<max<<endl;


    // //part 2
    // //largest element in the array
    // int max =0;// this is not right because when the elements of input[3] is -3 -1 -5  then the maximum element should be -1 but our code will give 0;
    // for(int i=0;i<n;i++)
    // {
    //     if(input[i]>max)
    //     {
    //         max=input[i];
    //     }
    // }
    // cout<<"max : "<<max<<endl;


    //part 3
    //largest element in the array
    int max =INT_MIN;// here we take the minimum value of int which is -2^31  we alse have to include the climits fle
    for(int i=0;i<n;i++)
    {
        if(input[i]>max)
        {
            max=input[i];
        }
    }
    cout<<"max : "<<max<<endl;
    return 0;
}