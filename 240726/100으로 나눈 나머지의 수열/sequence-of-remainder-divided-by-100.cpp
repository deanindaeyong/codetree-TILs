#include <iostream>
using namespace std;
int n;

int fuc(int a){
    if(a==1) return 2;
    if(a==2) return 4;
    return fuc(a-1)*fuc(a-2)%100; 
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    cout<<fuc(n);
    return 0;
}