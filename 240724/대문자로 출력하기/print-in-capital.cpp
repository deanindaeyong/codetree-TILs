#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
     string c,x={};
     cin>>c;
     for(int i=0;i<c.length();i++){
        if(isalpha(c[i])!=0){
            x+=(char)(toupper(c[i]));
        }
     }
    //x=(char)(toupper(x));
    cout<<x;
    return 0;
}