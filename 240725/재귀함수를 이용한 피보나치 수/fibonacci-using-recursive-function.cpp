#include <iostream>
using namespace std;
int n;
int fib(int a){
    if(a==0) return 0;
    if(a==1) return 1;
    return fib(a-1)+fib(a-2);
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    cout<<fib(n);
    return 0;
}