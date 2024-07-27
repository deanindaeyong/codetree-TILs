#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string x;
    int num=0;
    
    cin>>x;
    
    for(int i=0;i<x.length();i++){
        num=num*2+(x[i]-'0');
    }
    cout<<num;
    return 0;
}