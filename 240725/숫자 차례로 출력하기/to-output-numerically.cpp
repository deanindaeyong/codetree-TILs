#include <iostream>
using namespace std;
int n;
void pt(int a){
    if(a==0){
        return;
    }
    cout<<a<<" ";
    pt(a-1);
}
void p2(int a){
    if(a==0){
        return;
    }
    p2(a-1);
    cout<<a<<" ";
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    p2(n);
    cout<<endl;
    pt(n);
    return 0;
}