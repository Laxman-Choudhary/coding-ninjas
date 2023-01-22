#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int **p=new int*[m];
    for(int i=0;i<n;i++)
    {
        p[i]=new int[n];
        for(int j=0;j<n;j++)
        {
            cin>>p[i][j];
        }
    }
    //delete []p;//this is wrong because u are deleting the pointer array after that it is impossible to dealocate other arrays which are pointed by the elements of the array
    for(int i=0;i<m;i++)
    {
        delete [] p[i];
    }
    delete []p;//here it is right
    return 0;
}