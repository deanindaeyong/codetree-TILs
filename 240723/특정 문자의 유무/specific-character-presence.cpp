#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string c;
    cin>>c;
    int x=c.length();
    bool f=false,s=false;
    for(int i=0;i<x;i++){
        if(c.substr(i,2)=="ee"){
            f=true;
        }
        if (c.substr(i,2)=="ab"){
            s=true;
        }
    }
    if(f){cout<<"Yes"<<" ";}
        else{cout<<"No"<<" ";}
    if(s){cout<<"Yes"<<" ";}
        else{cout<<"No"<<" ";}
    return 0;
}