#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int cnt=0;
    while(1){
        if(n%2!=0)
        break;
        else{n=n/2; ++cnt;
        }
    }
    cout<<cnt;
    return 0;
}