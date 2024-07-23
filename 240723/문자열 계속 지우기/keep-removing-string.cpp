#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a,b;
    cin>>a>>b;
    int x=b.length();
    while(a.find(b)!=string::npos){
        a=a.erase(a.find(b),x);
    }
    cout<<a;
    return 0;
}