#include <iostream>
using namespace std;

int tsn(int a,int b){
    int cnt=0;

    for(int i=a;i<=b;i++){
        if(i%3==0){
            cnt++;
            continue;
        }
        string x=to_string(i);
        for(int j=0;j<x.length();j++){
            if(x[j]=='3' || x[j]=='6' ||x[j]=='9'){
                cnt++;
                break;
            }
        }
        
    }
    return cnt;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin>>a>>b;
    cout<<tsn(a,b);
    return 0;
}