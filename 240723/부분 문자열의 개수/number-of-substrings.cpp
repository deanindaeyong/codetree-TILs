#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a,b;
    cin>>a>>b;
    int cnt=0;
    for(int i=a.find(b);i<a.length();i++){
        if(a[i]==b[0] && a[i+1]==b[1]){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}