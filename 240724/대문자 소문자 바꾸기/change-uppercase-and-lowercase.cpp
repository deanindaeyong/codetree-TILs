#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string c;
    cin>>c;
    for(int i=0;i<c.length();i++){
        if(islower(c[i])){
            c[i]=(char)(toupper(c[i]));
        }else c[i]=(char)(tolower(c[i]));
    }
    cout<<c;
    return 0;
}