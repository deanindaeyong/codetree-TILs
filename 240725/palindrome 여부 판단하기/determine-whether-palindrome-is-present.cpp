#include <iostream>
using namespace std;
void pal(string &x){
    int len=x.length();
    bool npal=false;
    for(int i=0;i<len;i++){
       if(x[i]!=x[len-1-i]){
        npal=true;

       }
    }
    if(npal){
        cout<<"No";
    }else cout<<"Yes";
}
int main() {
    // 여기에 코드를 작성해주세요.
    string c;
    getline(cin,c);
    pal(c);
    return 0;
}