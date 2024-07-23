#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string c;
    cin>>c;
    int x;
    cin>>x;
    int len=c.length();
    if(x>len){
        for(int i=len-1;i>=0;i--){
            cout<<c[i];
        }
    }
    else for(int i=len-1;i>=len-x;i--){
        cout<<c[i];
    }
    return 0;
}