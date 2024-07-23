#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,cnt=0;
    string a,b;
    cin>>n>>a;
    for(int i=0;i<n;i++){
        cin>>b;
        if(b==a){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}