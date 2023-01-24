#include <iostream>
using namespace std;

#define MULTIPLY(a, b) a*b

int main(){
    cout << MULTIPLY(2+3, 3+5);
    return 0;
}
// Because C++ macros are not functions. They are text copies, so that means:
// cout << 2+3*3+5;
// Which is 2 + (3*3) + 5