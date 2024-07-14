#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;
    cin>>a>>b>>c;
    int cnt=0;
    for(int i=a;i<=b;i++){
        if(i%c==0){
            cout<<"YES";
            cnt++;
            break;
        }
    }
    if(cnt==0){
        cout<<"NO";
    }
    return 0;
}