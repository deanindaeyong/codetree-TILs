#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int cnt=2;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(cnt>8) cnt=2
            cout<<cnt;
            cnt*=2;
        }
    }
    return 0;
}