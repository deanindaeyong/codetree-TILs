#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    string x="",c;
    for(int i=0;i<n;i++){
        cin>>c;
        x.append(c);
    }
    cout<<x;
    return 0;
}