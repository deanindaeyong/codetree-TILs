#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int m=13;
    double x= 0.165000;
    
    cout<<m<<" * ";
    cout<<fixed;
    cout.precision(6);
    cout<<x<<" = "<< m*x;

    return 0;
}