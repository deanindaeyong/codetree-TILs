#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b;
    return 0;
}