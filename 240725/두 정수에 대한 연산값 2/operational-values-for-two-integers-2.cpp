#include <iostream>
using namespace std;
int a,b;
void met(int &a,int &b){
    if(a>b){
        b+=10;
        a*=2;
    }else {a+=10;b*=2;}
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>a>>b;
    met(a,b);
    cout<<a<<" "<<b;
    return 0;
}