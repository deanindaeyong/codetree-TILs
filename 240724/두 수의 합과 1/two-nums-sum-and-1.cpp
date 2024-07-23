#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin>>a>>b;
    int sum=a+b;
    string x=to_string(sum);
    int s=0;
    for(int i=0;i<x.length();i++){
        if(x[i]=='1'){
            s++;
        }
    }
    cout<<s;
    return 0;
}