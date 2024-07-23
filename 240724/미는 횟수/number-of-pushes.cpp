#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a,b;
    cin>>a>>b;
    int cnt=0;
    bool no=false;

    int len=a.length();
    for(int i=0;i<len;i++){
        a=a.substr(len-1,1)+a.substr(0,len-1);
        if(a==b){
            cnt++;
            no=true;
            break;
        }else cnt++;
    }
    if(no){
        cout<<cnt;
    }else cout<<-1;
    return 0;
}