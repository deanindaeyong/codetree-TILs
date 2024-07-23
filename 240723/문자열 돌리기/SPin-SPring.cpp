#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string c;
    cin>>c;
    int len=c.length();
    cout<<c<<endl;
    for(int i=0;i<len;i++){
        c=c.substr(c.length()-1,1)+c.substr(0,len-1);
        cout<<c<<endl;
    }
    return 0;
}