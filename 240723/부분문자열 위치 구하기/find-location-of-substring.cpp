#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string c,x;
    cin>>c>>x;
    int idx=-1;
    if(c.find(x)!=string::npos){
        idx=c.find(x);
    }
    cout<<idx;
    return 0;
}