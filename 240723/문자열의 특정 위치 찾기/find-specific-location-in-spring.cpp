#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string c;
    char x;
    cin>>c>>x;
    int index=-1;
    if(c.find(x)!=string::npos){
        index=c.find(x);
        cout<<index;
    } else cout<<"No";
    
    return 0;
}