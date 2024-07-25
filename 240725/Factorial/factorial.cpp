#include <iostream>
using namespace std;
int n;
int fac(int a){
    if(a<=1) return 1;
    return  fac(a-1)*a;
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    cout<<fac(n);
    return 0;
}