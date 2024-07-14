#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,i;
    cin>>a>>b;
    i=a;
    while(i>=b){
        cout<<i<<" ";
        i-=2;
    }
    return 0;
}