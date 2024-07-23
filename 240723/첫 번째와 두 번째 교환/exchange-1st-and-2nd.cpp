#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string c;
    cin>>c;
    char a=c[0];
    char b=c[1];
    for(int i=0;i<c.length();i++){
        if(c[i]==a){
            c[i]=b;
        }
        else if(c[i]==b){
            c[i]=a;
        }
    }
    cout<<c;
    return 0;
}