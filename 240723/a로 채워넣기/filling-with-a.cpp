#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string c;
    cin>>c;
    c[1]='a';c[c.length()-2]='a';
    cout<<c;
    return 0;
}