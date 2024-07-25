#include <iostream>
using namespace std;
int n;
int weird(int a){
    if(a==1) return 1;
    if(a==2) return 2;
    return weird(a/3)+weird(a-1);
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    cout<<weird(n);
    return 0;
}