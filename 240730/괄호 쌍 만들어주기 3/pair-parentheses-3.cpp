#include <iostream>
using namespace std;
string a;
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>a;
    int len=a.length();
    int cnt=0;
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(a[i]=='(' &&a[j]==')'){
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}