#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a,b,ab,ba;
    int sum;
    cin>>a>>b;
    ab=a+b;
    ba=b+a;
    sum=stoi(ab)+stoi(ba);
    cout<<sum;
    return 0;
}