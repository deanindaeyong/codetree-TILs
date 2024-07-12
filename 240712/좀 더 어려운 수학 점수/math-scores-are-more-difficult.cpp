#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int ae,am,be,bm;
    cin>>am>>ae>>bm>>be;

    if(am>bm)
    cout<<"A";
    else if(bm>am)
    cout<<"B";
    else if(ae>be)
    cout<<"A";
    else cout<<"B";
    return 0;
}