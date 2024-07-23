#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string c;
    cin>>c;
    char x=c[1],y=c[0];
    for(int i=0;i<c.length();i++){
        if(c[i]==x){
            c[i]=y;
        }
    }
    cout<<c;
    return 0;
}