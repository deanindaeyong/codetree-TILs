#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,a,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        sum+=a;
    }
    string x=to_string(sum);
    int len=x.length();
    x=x.substr(1)+x.substr(0,1);
    cout<<x;
    return 0;
}