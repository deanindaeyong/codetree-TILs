#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;
    if(b>a)
    for(int i=b;i>=a;i--)
    cout<<i<<" ";
    else 
     for(int i=a;i>=b;i--)
    cout<<i<<" ";
    return 0;
}