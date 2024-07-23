#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string c,q;
    cin>>c>>q;
    int len =c.length();
    for(int i=0;i<q.length();i++){
        if(q[i]=='L'){
            c=c.substr(1,len-1)+c.substr(0,1);

        }
        else if(q[i]=='R'){
           c=c.substr(len-1,1)+c.substr(0,len-1);
        }
    }
    cout<<c;
    return 0;
}