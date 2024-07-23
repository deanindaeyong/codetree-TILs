#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string c,x={};
    cin>>c;
    for(int i=0;i<c.length();i++){
        if(isalpha(c[i])!=0){
            x+=(char)(tolower(c[i]));

        }
        else if(isdigit(c[i])!=0){
            x+=c[i];
        }
    }
    cout<<x;
    return 0;
}