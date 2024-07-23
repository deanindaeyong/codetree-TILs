#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin>>a;
    int x=a.length();
    a=a.erase(a.find('e'),1);
    cout<<a;
    return 0;
}