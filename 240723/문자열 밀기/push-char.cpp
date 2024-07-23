#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string c;
    cin>>c;
    int len=c.length();
    c=c.substr(1)+c.substr(0,1);
    cout<<c;
    return 0;
}