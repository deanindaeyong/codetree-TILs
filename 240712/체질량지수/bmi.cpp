#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int h,w;
    cin>>h>>w;
    double b;
    b=(10000*w)/(h*h);
    cout<<fixed;
    cout.precision(0); 
    cout<<b;
    if(b>=25){
        cout<<endl<<"Obesity";
    }

    return 0;
}