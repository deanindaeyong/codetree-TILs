#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string c;
    cin>>c;
    int len=c.length();
    for(int i=len-1;i>=0;i--){
        if(i%2!=0){
            cout<<c[i];
        }
    }
    
    return 0;
}