#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int cnt=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(cnt>4) cnt=1;
            cout<<cnt*2<<" ";
            cnt++;
        }
        cout<<endl;
    }
    return 0;
}