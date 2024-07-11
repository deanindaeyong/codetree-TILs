#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    double a;
    cin>>a;

    if(a>=1.0)
        cout<<"High";
    else if(0.5<=a)
        cout<<"Middle";
    else cout<<"Low";
    return 0;
}