#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int cnt=0;
    while(1){
        cin>>n;
        if(cnt==3)
        break;
        if(n%2==0){
            cout<<n/2<<endl;
            ++cnt;
        }
    }
    return 0;
}