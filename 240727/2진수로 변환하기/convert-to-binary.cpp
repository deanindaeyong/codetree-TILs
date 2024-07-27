#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int cnt=0;
    cin>>n;
    int ans[100000];

    while(true){
        if(n<2){
            ans[cnt++]=n;
            break;
        }
        ans[cnt++]=n%2;
        n/=n;
    }
    for(int i=n-1;i>=0;i--){
        cout<<ans[i];
    }
    return 0;
}