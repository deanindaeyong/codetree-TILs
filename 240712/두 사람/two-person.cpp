#include <iostream>
using namespace std;

int main() {

    // Please write your code here.
    int aa,ba;
    char ag,bg;
    cin>>aa>>ag>>ba>>bg;

    if((ag=='M'&&aa>=19)||(bg=='M'&&ba>=19))
    cout<<1;
    else cout<<0;
    return 0;
}