#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string c;
    char a;
    getline(cin,c);
    cin>>a;
    int cnt=0,len;
    len=c.length();
    
    for(int i=0;i<len;i++){
        if(c[i]==a){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}