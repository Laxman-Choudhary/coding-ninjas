#include<iostream>
using namespace std;
int main()
{
    int i=65;
    char c= i;
    cout<<c<<endl;

    // int *p = &i;       wrong
    // char *pc = p;       

    int *p=&i;
    char *pc = (char *)p; // explicit typecating

    cout<<p<<endl;
    cout<<pc<<endl;//this prints until it meets the null charater

    cout<<*p<<endl;
    cout<<*pc<<endl;

    cout<<*(pc+1)<<endl;
    cout<<*(pc+2)<<endl;
    cout<<*(pc+3)<<endl;
    return 0;
}