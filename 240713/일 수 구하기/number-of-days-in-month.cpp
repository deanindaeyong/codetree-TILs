#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    if(n==2)
    cout<<28;
    else if(n==4||n==6||n==9||n==1)
    cout<<31;
    else cout<<30;
    return 0;
}