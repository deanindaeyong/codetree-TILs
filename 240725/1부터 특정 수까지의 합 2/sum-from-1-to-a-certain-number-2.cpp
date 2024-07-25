#include <iostream>
using namespace std;
int n;
int adi(int a){
    if(a==1)
        return 1;
    return adi(a-1)+a;
}
int main() {
    cin>>n;
    // 여기에 코드를 작성해주세요.
    cout<<adi(n);
    
    return 0;
}