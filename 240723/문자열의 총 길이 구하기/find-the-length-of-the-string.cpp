#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a[10];
    int cnt=0;
    for(int i=0;i<10;i++){
        cin>>a[i];
        cnt+=a[i].length();
    }
    cout<<cnt;
    return 0;
}